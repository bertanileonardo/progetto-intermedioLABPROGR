#include "../include/Date.h"

int Date::getDay() const { return d; }
int Date::getMonth() const { return m; }
int Date::getYear() const { return y; }

Date::Date(int dd, int mm, int yy)
    :d{dd}, m{mm}, y{yy}
{
    if(!is_valid())
        throw InvalidDate();
}

int Date::days_in_month[13] = {0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // non uso la posizione [0]

bool Date::is_valid() const
{   
    days_in_month[2] = getFebruary(getYear()); //inserisco 28/29 su febbraio se è l'anno bisestile o meno
   
    if(d < 1 || d > days_in_month[getMonth()] ) //controllo se il giorno non è valido confrontando il giorno con quello massimo per il mese
        return false;
    if(m < 1 || m > 12) //controllo se il mese non è valido
        return false;
    if(y < 0)   //controllo se l'anno non è valido
        return false;
    
    return true; //la data è valida

}

bool Date::is_leap_year(int year) const //true = anno bisestile, false = no 
{
    return((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int Date::getFebruary(int year) const //ritorna 29 se è l'anno bisestile, 28 altrimenti
{
    return is_leap_year(year) ? 29 : 28; 

}

// overloading operator==
bool Date::operator==(const Date& other) const {
    return ((d == other.getDay())&&(m == other.getMonth())&&(y == other.getYear()));
}    

// overloading operator=
void Date::operator=(Date& other){
    d = other.getDay();
    m = other.getMonth();
    y = other.getYear();
}  
