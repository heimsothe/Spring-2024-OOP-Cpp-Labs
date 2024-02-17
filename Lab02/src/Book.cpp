//Title: Book.cpp
//Desc: Implementation of Book.h
//Name: Elijah Heimsoth
//Class: 2312 H01
//Date: 02/16/2024

#include <iostream>
#include <string>
#include "Book.h"

Book::Book(){
//intentionally blank
}

//title and author only constructor
Book::Book(std::string aTitle, std::string anAuthor){
    setTitle(aTitle);
    setAuthor(anAuthor);
}
//full parameter constructor
Book::Book(std::string aTitle, std::string anAuthor, int aFormat, int aPubYear, int aNumOfPages){
    setTitle(aTitle);
    setAuthor(anAuthor);
    setFormat(aFormat);
    setPubYear(aPubYear);
    setNumOfPages(aNumOfPages);
}


//GETTERS
std::string Book::getTitle(){
    return title;
}

std::string Book::getAuthor(){
    return author;
}

std::string Book::getFormat(){
    return format;
}

int Book::getPubYear(){
    return pubYear;
}

int Book::getNumOfPages(){
    return numOfPages;
}

//SETTERS
void Book::setTitle(std::string theTitle){
    title = theTitle;
}

void Book::setAuthor(std::string theAuthor){
    author = theAuthor;
}

void Book::setFormat(int theFormat){
    //switch case to convert format int to string
    switch(theFormat){
        case 1:{
            format = "Hardcover";
            break;
        }
        case 2:{
            format = "Paperback";
            break;
        }
        case 3:{
            format = "Audiobook";
            break;
        }
        case 4:{
            format = "EBook";
            break;
        }
        default:{
            format = "unknown";
            break;
        }
    }
}

void Book::setPubYear(int thePubYear){
    pubYear = thePubYear;
}

void Book::setNumOfPages(int theNumOfPages){
    numOfPages = theNumOfPages;
}

//ADDITIONAL FUNCTIONS
//displays book info in formatted text form
void Book::displayBook(){
    std::cout << "Title : " << getTitle()
              << "\nAuthor : " << getAuthor()
              << "\nFormat : " << getFormat()
              << "\nPublication Year : " << getPubYear()
              << "\nNumber of Pages : " << getNumOfPages()
              << std::endl;
    return;
}

//allows for modification of existing book object
void Book::setBook(std::string aTitle, std::string anAuthor, int aFormat, int aPubYear, int aNumOfPages){
    setTitle(aTitle);
    setAuthor(anAuthor);
    setFormat(aFormat);
    setPubYear(aPubYear);
    setNumOfPages(aNumOfPages);
}

//returns float of book weight
float Book::estimatedBookWeight(){
    std::string bookFormat = getFormat();
    /*
    2 books pages fit on 1 paper page (front/back), so the formula
    divides the totalPages by 2 if totalPages is even. If totalPages
    is odd, it adds 1 totalPages and then divides by 2 (rounding up essentially).
    */
    int totalPages = getNumOfPages();
    int paperPages;
    if (totalPages % 2 == 0){
        paperPages = totalPages / 2;
    }
    else {
        paperPages = (totalPages + 1)/2;
    }
    //formulas for weight based on book format
    float totalWeight = 0.0;
    if (bookFormat == "EBook" || bookFormat == "Audiobook" || bookFormat == "unknown"){
        ;
    }
    else if (bookFormat == "Hardcover"){
        totalWeight = 2.1 + (paperPages * 0.176);
    }
    else if (bookFormat == "Paperback"){
        totalWeight = 0.4 + (paperPages * 0.176);
    }
    return totalWeight;
}
//returns float of reading time
float Book::estimatedReadingTime(){
    float pageSpeed;
    std::cout << "Enter reading speed (page/minute): ";
    std::cin >> pageSpeed;
    int totalPages = getNumOfPages();
    
    float readTime = totalPages / pageSpeed;
    return readTime;
}



