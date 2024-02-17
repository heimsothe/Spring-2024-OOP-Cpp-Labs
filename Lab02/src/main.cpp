#include <iostream>
#include <string>
#include "Book.h"

int main(){
    Book Default; //test default constructor

    Book Narnia("Narnia", "C.S. Lewis");

    Book Test1("Test Book 1", "Some Person", 1, 2000, 100);

    Default.displayBook();
    Narnia.displayBook();
    Test1.displayBook();

    return 0;
}