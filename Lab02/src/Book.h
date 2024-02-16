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
        void setTitle(std::string aTitle);
        void setAuthor(std::string anAuthor);
        void setFormat(int aFormat);
        void setPubYear(int aPubYear);
        void setNumOfPages(int aNumOfPages);

        //additional functions
        void displayBook();
        void setBook(std::string aTitle, std::string anAuthor, int aFormat, int aPubYear, int aNumOfPages);
        void estimatedBookWeight(); //uml uses float type: may need to change
        void estimatedReadingTime(); //uml uses float type: may need to change

    private:
        std::string title;
        std::string author;
        std::string format;
        int format;
        int pubYear;
        int numOfPages;

}

#endif