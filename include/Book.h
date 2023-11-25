#include <string>
#include "Date.h"

#ifndef BOOK_H
#define BOOK_H

class Book{
    
public:

    class UnAvailableBook{};
    class InvalidStatusOperations{};
    class InvalidIsbnData{};

    // funzioni restituizione dati membro

    std::string get_isbn() const ;

    std::string get_author_name() const ;

    std::string get_author_surname() const ;

    std::string get_title() const ;

    std::string get_string_date() const ;
    
    Date get_date() const ;

    bool get_availability() const ;

    // costruttore
    Book();
    // costruttore con date implicita - 3 febbraio 1468 Morte di Gutenberg
    explicit Book(
        std::string i_author_name,
        std::string i_author_surname,
        std::string i_title,
        std::string i_isbn
        );

    // costruttore con date esplicita
    explicit Book(
        std::string i_author_name,
        std::string i_author_surname,
        std::string i_title,
        std::string i_isbn,
        Date i_date
        );

    // registrazione presitito e restituizione

    void get_loan();

    void return_loan();

    // overloading operator== (isbn based)
    bool operator==(Book& other);

    // overloading operator!= (isbn based)
    bool operator!=(Book& other);

private:

    // controllo isbn
    void isbn_isValid();

    std::string isbn;               // isbn libro da limitare a 13 caratteri
    std::string title;              // titolo libro
    std::string author_name;        // nome autore
    std::string author_surname;     // cognome autore
    Date date;                      // data di copyright

    bool available;                 // stato 
                                    // prestito --> false, 
                                    // disponibile --> true

};

// overloading operator<< (row print of data)
std::ostream& operator<<(std::ostream& os, const Book& item);

std::string to_string(const Book& item);

#endif // BOOK_H