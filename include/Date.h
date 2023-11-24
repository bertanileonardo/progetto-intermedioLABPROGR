#ifndef DATE_H
#define DATE_H

class Date {
public:
    class InvalidDate{};  

    Date(int dd, int mm, int yy); 
    
    int getDay() const;
    int getMonth() const;
    int getYear() const;

    bool operator==(Date& other);// overloading operator==
    void operator=(Date& other);// overloading operator=

private:
    int d, m, y;
    static int days_in_month[13];
    bool is_valid() const;
    bool is_leap_year(int year) const;
    int getFebruary(int year) const;
};

#endif
