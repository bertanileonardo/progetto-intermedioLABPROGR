#include <iostream>
#include "../include/Book.h"
#include "../include/BookShelf.h"

int main(){

    std::cout << std::endl <<   "**       Book - BookShelf tester      **" << std::endl
                           <<   "** progetto Bertani, Gasparoni, Vanon **";

    std::cout << std::endl << std::endl;

    std::cout << "** Creazione oggetto Book 1 " << std::endl << std::endl;

    Book mybook("David", "Foster Wallace", "Una cosa divertente che non farò mai più", "887-521-837-4");

    std::cout << mybook << std::endl; 

    Book mybook2("David", "Foster Wallace", "Una cosa divertente che non farò mai più", "887-521-837-6");

    Book mybook3("David", "Foster Wallace", "Una cosa divertente che non farò mai più", "887-521-837-6");

    if(mybook2 != mybook3)
        std::cout << mybook2 << " " << mybook3 << std::endl;
    else
        std::cout << "** Confronto tra due oggetti Book uguali eseguito" << std::endl << std::endl;

    Date date(12, 8, 2020);

    Book mybook4("David", "Foster Wallace", "Una cosa divertente che non farò mai più", "887-521-837-6", date);

    std::cout << "** Creazione oggetto Book 4 con data esplicita " << std::endl << std::endl;

    std::cout << mybook4 << std::endl;

    BookShelf shelf(10);
    
    std::cout<<"** Vettore creato correttamente"<<std::endl<<std::endl;

    shelf.push_back(mybook);
    shelf.push_back(mybook4);

    std::cout << "** Stampa vettore di Book" << std::endl << std::endl;

    std::cout<<shelf;

    Book removed_book = shelf.pop_back();

    std::cout<<"** Rimuovo l'ultimo: "<<std::endl<<std::endl<<removed_book;

    std::cout<<std::endl;

    return 0;
}
