#include "Book.h"

#ifndef BOOKSHELF_H
#define BOOKSHELF_H

class BookShelf {
public:

  // Classe Eccezione
  class IndexOutOfBoundException{};
  class InvalidSizeException{};

  // Costruttore
  BookShelf();//di default
  explicit BookShelf(int s); // esplicito con dimensione data dall'utente

  // Distruttore
  ~BookShelf();

  // Ritorna dimesione vettore
  int size() const; // funzione costante (che non modifica lo stato dell'oggetto)

  // Ritorna dimensione buffer
  int my_buffer_size() const; 

  // costruttore di Copia
  BookShelf(const BookShelf& item);

  // costruttore di Move
  BookShelf(BookShelf&& item);

  // overloading operatore Copia
  BookShelf& operator=(const BookShelf& item);

  // overloading operatore Move
  BookShelf& operator=(BookShelf&& item);
  
  // overloading operator[]
  Book& operator[](int index);    // operator[] ritorna una reference a un
                                  // Book nella versione _non_ cost
      
  Book operator[](int index) const;

  //inserimento sicuro di un oggetto libro in un indice dell'array
  void safe_set(Book val, int index);

  //ottenimento sicuro di un oggetto libro da un indice dell'array

  Book safe_get(int index);

  // reference at (size_type n) Returns a reference to the element (in questo caso un Book) at position n in the vector, otherwise throw an exception
  Book& at(int index);

  // funzione che aggiunge un elemento alla fine
  void push_back(Book val);

  // funzione che rimuove l'ultimo elemento, e lo restituisce per buona pratica
  Book pop_back();
  
  // funzione che impone una dimensione minima al buffer, se dim buffer corrente maggiore di new_buffer_size la funzione non fa nulla
  void reserve (int new_buffer_size);

private:

    // funzioni membro private

    // funzione membro di controllo rispetto limiti vettore (non posso usare una
    void index_check(int index);

    // funzione membro di controllo dimensione buffer
    void my_buffer_check();

    // funzione di ridimensionamento del buffer
    void my_buffer_resize(); 

    // variabili esemplare

    int sz;       // size

    Book *elem;   // vettore di Book di lunghezza decisa in fase di costruzione
                  // e poi immmodificabile allocato dinamicamente con un puntatore

    int my_buffer_sz;
    
    //costanti

    static constexpr int k_default_buffer_size = 10;
    static constexpr int k_default_resize_factor = 2;
    static constexpr int k_default_size = 0;
};

//overloading operator<<
std::ostream& operator<<(std::ostream& os, const BookShelf item);

#endif // BOOKSHELF_H