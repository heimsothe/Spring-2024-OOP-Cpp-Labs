#include <string>
#include "Book.h"

Book::Book(){

}

Book::Book(std::string aTitle, std::string anAuthor){
    title = aTitle;
    author = anAuthor;
}

Book::Book(std::string aTitle, std::string anAuthor, int aFormat, int aPubYear, int aNumOfPages){
    title = aTitle;
    author = anAuthor;
    format = aFormat;
    pubYear = aPubYear;
    numOfPages = aNumOfPages;
}



std::string Book::getTitle(){
    return title;
}

std::string Book::getAuthor(){
    return author;
}

std::string Book::getFormat(){
    retrun format;
}

int Book::getPubYear(){
    return pubYear;
}

int Book::getNumOfPages(){
    return numOfPages;
}

void Book::setTitle(std::string theTitle){
    title = theTitle;
}

void Book::setAuthor(std::string theAuthor){
    author = theAuthor;
}
/*
1 : Hardcover
2 : Paperback
3 : Audiobook
4 : EBook
default : unknown
*/

void Book::setFormat(int theFormat){
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

