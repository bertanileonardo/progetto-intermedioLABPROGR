#include <iostream>
#include <stdexcept>
#include <algorithm>  
#include "../include/BookShelf.h"
#include "../include/Book.h"

BookShelf::BookShelf() : sz{k_default_size},elem{nullptr} {};

BookShelf::BookShelf(int s)
    : sz{s},
      elem{new Book[s]} {   // costruttore con init_list e poi
                            // inizializzazione a zero degli elementi interni
  if (s == 0)
    elem = nullptr;         // se non ha dimensione, allora il puntatore è null
                            //non serve inizializzare gli oggetti, già fatto dal costruttore di default di Book
  if (s<0) { throw InvalidSizeException(); }
  if (s<k_default_buffer_size) { s = k_default_buffer_size; }
  my_buffer_sz = s;

}

BookShelf::~BookShelf() { delete[] elem; }

int BookShelf::size() const {
  return sz;
}

void BookShelf::index_check(int index) {
  if (!(index > 0 && index < sz))
    throw std::out_of_range("Indice fuori dai limiti");
}

void BookShelf::my_buffer_check() {
  if(my_buffer_sz == sz) my_buffer_resize();  // se la dimensione del buffer coincide con quella del vettore allora devo ridimensionare il vettore
}

BookShelf::BookShelf(const BookShelf& item) : sz{item.sz}, my_buffer_sz{item.my_buffer_sz}, elem{new Book[item.my_buffer_sz]}{ 
	std::copy(item.elem, item.elem+sz, elem);
}

BookShelf::BookShelf(BookShelf&& item) : sz{item.sz}, my_buffer_sz{item.my_buffer_sz}, elem{item.elem}{
	item.sz = 0; 
	item.my_buffer_sz = 0;
	item.elem = nullptr;
}

BookShelf& BookShelf::operator=(const BookShelf& item){
	Book *p = new Book[item.my_buffer_sz];
	std::copy(item.elem, item.elem + item.sz, p);
	delete[] elem;
	elem = p;
	sz = item.sz;
	my_buffer_sz = item.my_buffer_sz;

	return *this;
}

BookShelf& BookShelf::operator=(BookShelf&& item){
	delete[] elem;
	elem = item.elem;
	sz = item.sz;
	my_buffer_sz = item.my_buffer_sz;
	item.elem = nullptr;
	item.sz = 0;
	item.my_buffer_sz = 0;
	return *this;
}

Book& BookShelf::operator[](int index) { return elem[index]; }

Book BookShelf::operator[](int index) const { return elem[index]; }

Book& BookShelf::at(int index){
  index_check(index); 
  return elem[index];     // se soddisfatto il boundary check allora restituisco il valore
}

void BookShelf::safe_set(Book val, int index) {
  index_check(index);
  elem[index] = val;
};

Book BookShelf::safe_get(int index) {
  index_check(index);
  return elem[index];
};

void BookShelf::push_back(Book val){
  my_buffer_check();
  elem[sz++] = val;       // (post-incremento, incremento dopo aver eseguito [])
}

Book BookShelf::pop_back(){                       // restituisco il vecchio valore come Book perchè la cella viene azzerata
  if(sz==0) {throw InvalidSizeException(); }      //andrei oltre i limiti del mio vettore 
  Book temp = elem[sz - 1];
  elem[--sz] = Book();                            // decremento sz (prima di eseguire [] - pre-decremento) e 
                                                  // azzero l'elemento in sz  (lo faccio chiamando il costruttore di default che 
                                                  // assegna valori vuoti alle variabili di esemplari e la data 0/0/0)  
  return temp;
}

void BookShelf::my_buffer_resize(){
  my_buffer_sz *= k_default_buffer_size;  // raddoppio la dimensione disponibile del vettore pieno
  Book* temp = elem;                      // creo un puntatore temporaneo alle celle di memoria del mio vettore elem
  elem = new Book[my_buffer_sz];          // creo il nuovo vettore di dimensione raddoppiata
  std::copy(temp, temp+sz, elem);         // copia degli elementi dal puntatore temp a sz 
                                          // posizioni dopo (uso l'algebra dei puntaori), nel nuovo vettore elem
  delete[] temp;                          // cancello il puntatore al vecchio vettore
  temp = nullptr;                         // invalido temp
}

void BookShelf::reserve(int new_buffer_size){
  // occorre fare tanti resize quanti sono 
  // necessari al fatto che lo spazio libero sia maggiore di n
  while ((my_buffer_sz-sz)<new_buffer_size){
    my_buffer_resize();                   // mi conviene fare più volte resize così sfrutto il fatto che 
                                          // in analisi ammortizzata questa operazione tende ad essere O(1)
  }
}

std::ostream& operator<<(std::ostream& os, const BookShelf item){
  
  std::string output="";

  for (int i = 0; i < item.size(); i++)
  {
    if(item[i].get_title() != ""){
      output=output + to_string(item[i]) + "\n";
    }
  }

  return os << output;
}