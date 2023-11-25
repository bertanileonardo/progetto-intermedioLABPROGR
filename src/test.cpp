#include <iostream>
#include "../include/Book.h"

int main(){
    Book mybook("David", "Foster Wallace", "Una cosa divertente che non farò mai più", "887-521-837-4");
    std::cout << mybook << std::endl; 

    Book mybook2("David", "Foster Wallace", "Una cosa divertente che non farò mai più", "887-521-837-6");

    Book mybook3("David", "Foster Wallace", "Una cosa divertente che non farò mai più", "887-521-837-6");

    if(mybook2 != mybook3)
        std::cout << mybook2 << " " << mybook3 << std::endl;
    else
        std::cout << "Equal" << std::endl;

    Date date(12, 8, 2020);

    Book mybook4("David", "Foster Wallace", "Una cosa divertente che non farò mai più", "887-521-837-6", date);

    std::cout << mybook4 << std::endl;

    return 0;
}