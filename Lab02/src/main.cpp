//Title: main.cpp
//Desc: test program for Book class
//Name: Elijah Heimsoth
//Class: 2312 H01
//Date: 02/16/2024

#include <iostream>
#include <string>
#include "Book.h"

int main(){
    Book Default; //test default constructor
    Book Narnia("Narnia", "C.S. Lewis"); // Book and Title only constructor
    Book Test1("Test Book 1", "Some Person", 1, 2000, 100); //full parameter constructor

    //testing displayBook
    Default.displayBook();
    Narnia.displayBook();
    Test1.displayBook();

    //testing setBook
    Narnia.setBook("The Lion, the Witch and the Wardrobe",
                   "C. S. Lewis",
                   1,
                   1950,
                   172
                   );

    Narnia.displayBook();

    //testing estimatedBookWeight
    std::cout << "'The weight of The Lion, the Witch and the Wardrobe' is: "
              << Narnia.estimatedBookWeight() << std::endl;

    //testing estimatedReadingTime
    std::cout << "This will calculate the time to read for TLTWTW" << std::endl;
    std::cout << Narnia.estimatedReadingTime() << std::endl;

    return 0;
}