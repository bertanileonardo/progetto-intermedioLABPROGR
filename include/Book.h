#ifndef BOOK_H
#define BOOK_H

class Book{
    
public:

    class UnAvailableBook{};
    class InvalidStatusOperations{};
    class InvalidIsbnData{};

    // funzioni restituizione dati membro

    std::string get_isbn();
    /* std::string get_isbn(){
        return this->isbn;
    }*/

    std::string get_author_name();
    /* std::string get_author_name(){
        return this->author_name;
    }*/

    std::string get_author_surname();
    /* std::string get_author_surname(){
        return this->author_surname;
    }*/

    std::string get_title();
    /* std::string get_title(){
        return this->title;
    }*/

    Date::Date get_date();
    /* Date::Date get_date(){
        return this->date;
    }*/

    bool get_availability();
    /* {
        return this->available;
    }*/

    // costruttore

    // costruttore con date implicita - 3 febbraio 1468 Morte di Gutenberg
    Book(
        std::string author_name;
        std::string author_surname;
        std::string title;
        std::string isbn;
        ){};

    // costruttore con date esplicita
    Book(
        std::string author_name;
        std::string author_surname;
        std::string title;
        std::string isbn;
        Date::Date date;
        ){};

    // registrazione presitito e restituizione

    void get_loan();
    /* void get_loan(){
        if (!this->get_availability()) throw UnAvailableBook();
        available=false;
    }
    */

    void return_loan();
    /* void return_loan(){
        if (this->get_availability()) throw InvalidStatusOperation();
        available=true;
    }
    */

    // overloading operator== (isbn based)
    bool operator==(Book& other);
    /* bool operator==(Book& other){
        return this->isbn == other.isbn;
    }    
    */

    // overloading operator!= (isbn based)
    bool operator!=(Book& other);
    /* bool operator!=(Book& other){
        return this->isbn != other.isbn;
    }    
    */

private:

    // controllo data
    void data_isValid();
    /* void data_isValid(){
        
    }
    */
    // controllo isbn
    void isbn_isValid();
    /* void isbn_isValid(){
        if(!(isbn.length()==13)) throw InvalidIsbnData();
    }
    */

    std::string isbn; // isbn libro da limitare a 13 caratteri
    std::string title; // titolo libro
    std::string author_name; // nome autore
    std::string author_surname; // cognome autore
    Date::Date date; // data di copyright
    bool available; // stato in prestito --> false, disponibile --> true

}

// overloading operator<< (row print of data)
std::ostream& operator<<(std::ostream& os, Book& item);
/* std::ostream& operator<<(std::ostream& os, Book& item){ // helper function to overload the << operator
	return os   <<"Titolo: "<<item.get_title()<<std::endl
                <<"Autore: "<<item.get_author_name()<<" "<<item.get_author_surname()<<std::endl
                <<"ISBN:: " ;
}*/

#endif // BOOK_H