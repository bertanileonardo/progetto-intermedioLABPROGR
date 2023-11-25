#include "../include/Book.h"
#include "../include/Date.h"
#include <iostream>
#include <string>

Date dateGut(3, 2, 1468); // variabile dateGut di tipo Date come appoggio

std::string Book::get_isbn() const { return isbn; }

std::string Book::get_author_name() const { return author_name; }

std::string Book::get_author_surname() const { return author_surname; }

std::string Book::get_title() const { return title; }

std::string Book::get_string_date() const {
    if(!(get_date().is_valid())||date == dateGut) { return "unvalid date"; }

    //stringa con la data di copyright
    std::string stringDate =           
    std::to_string(get_date().Date::getDay()) + "/" + 
    std::to_string(get_date().Date::getMonth()) + "/" + 
    std::to_string(get_date().Date::getYear()); 

    return stringDate;
}

Date Book::get_date() const { return date; }

bool Book::get_availability() const { return available; }

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
    if(!(i_date.is_valid())){ throw Date::InvalidDate(); }
    available = true;
};


// registrazione presitito e restituizione

void Book::get_loan(){
    if (!(get_availability())){ throw UnAvailableBook(); }
    available=false;
}

void Book::return_loan(){
    if (get_availability()){ throw InvalidStatusOperations();}
    available=true;
}

// overloading operator== (isbn based)
bool Book::operator==(Book& other){ return isbn == other.isbn; }    

// overloading operator!= (isbn based)
bool Book::operator!=(Book& other){ return isbn != other.isbn; }    

// controllo isbn
void Book::isbn_isValid(){
    if(!(isbn.length()==13)){ throw Book::InvalidIsbnData(); }
}

//overloading operator<< (row print of data)
std::ostream& operator<<(std::ostream& os, const Book& item){ // helper function to overload the << operator

    os  <<"Titolo: " << item.get_title() << std::endl;
    os  <<"Autore: " << item.get_author_name() << " " << item.get_author_surname() << std::endl;
    os  <<"ISBN: " << item.get_isbn() << std::endl;
    os  <<"Data di copyright: " << item.get_string_date() << std::endl;

    return os;
}