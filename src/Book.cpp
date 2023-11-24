#include "../include/Book.h"
#include "../include/Date.h"
#include <iostream>
#include <string>

std::string Book::get_isbn() const {
    return isbn;
}

std::string Book::get_author_name() const {
    return author_name;
}

std::string Book::get_author_surname() const {
    return author_surname;
}

std::string Book::get_title() const {
    return title;
}

std::string Book::get_string_date() const {
    return "papere";
}

Date Book::get_date() const {
    return date;
}

bool Book::get_availability() const {
    return available;
}

// costruttore

// costruttore con date implicita - 3 febbraio 1468 Morte di Gutenberg
Book::Book(
    std::string i_author_name,
    std::string i_author_surname,
    std::string i_title,
    std::string i_isbn
    ):
    isbn{i_isbn}, 
    title{i_title}, 
    author_name{i_author_name}, 
    author_surname{i_author_surname}
{
    Date::Date dateGut(3,2,1468);
    date = dateGut;
    available = true;
};

// costruttore con date esplicita
Book::Book(
    std::string i_author_name,
    std::string i_author_surname,
    std::string i_title,
    std::string i_isbn,
    Date i_date
    ):
    isbn{i_isbn}, 
    title{i_title}, 
    author_name{i_author_name}, 
    author_surname{i_author_surname},
    date{i_date}
{
    if(!(i_date.is_valid())){
        throw Date::InvalidDate();
    }
    available = true;
};


// registrazione presitito e restituizione

void Book::get_loan(){
    if (!(get_availability())) throw UnAvailableBook();
    available=false;
}

void Book::return_loan(){
    if (get_availability()) throw InvalidStatusOperations();
    available=true;
}

// overloading operator== (isbn based)
bool Book::operator==(Book& other){
    return isbn == other.isbn;
}    

// overloading operator!= (isbn based)
bool Book::operator!=(Book& other){
    return isbn != other.isbn;
}    

// controllo isbn
void Book::isbn_isValid(){
    if(!(isbn.length()==13)) throw Book::InvalidIsbnData();
}
/*
// overloading operator<< (row print of data)
std::ostream& operator<<(std::ostream& os, const Book& item){ // helper function to overload the << operator

    std::string datedate = "";
    Date::Date dateGut(3,2,1468);
    if((item.get_date())==dateGut){
        datedate="invalid";
    } 
    else {
        datedate="";
    }

    return os   <<"Titolo: "<<item.get_title()<<std::endl
                <<"Autore: "<<item.get_author_name()<<" "<<item.get_author_surname()<<std::endl
                <<"ISBN:: "<<item.get_isbn()<<std::endl
                <<"Data:: "<<datedate<<std::endl;
}
*/