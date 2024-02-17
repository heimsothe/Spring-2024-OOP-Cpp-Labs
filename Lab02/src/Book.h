//Title: Book.h
//Desc: Header file for Book class
//Name: Elijah Heimsoth
//Class: 2312 H01
//Date: 02/16/2024

#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book{
    public:
        //constructors
        explicit Book();
        explicit Book(std::string aTitle, std::string anAuthor);
        explicit Book(std::string aTitle, std::string anAuthor, int aFormat, int aPubYear, int aNumOfPages);

        //getters
        std::string getTitle();
        std::string getAuthor();
        std::string getFormat();
        int getPubYear();
        int getNumOfPages();

        //setters
        void setTitle(std::string theTitle);
        void setAuthor(std::string theAuthor);
        void setFormat(int theFormat);
        void setPubYear(int thePubYear);
        void setNumOfPages(int theNumOfPages);

        //additional functions
        void displayBook();
        void setBook(std::string aTitle, std::string anAuthor, int aFormat, int aPubYear, int aNumOfPages);
        float estimatedBookWeight(); //uml uses float type: may need to change
        float estimatedReadingTime(); //uml uses float type: may need to change

    private:
        std::string title = "";
        std::string author = "";
        std::string format = "";
        int pubYear = 0;
        int numOfPages = 0;

};

#endif