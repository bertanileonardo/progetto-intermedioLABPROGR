#include <iostream>
#include <string>
#include "../include/Date.h"
#include "../include/Book.h"

int main(){
    Book mybook("David", "Foster Wallace", "Una cosa divertente che non farò mai più", "887-521-837-4");
    std::cout<<mybook;
}