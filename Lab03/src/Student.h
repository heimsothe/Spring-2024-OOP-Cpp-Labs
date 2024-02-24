//Title: Student.h
//Desc: Header file for Student class
//Name: Elijah Heimsoth
//Class: 2312 H01
//Date: 02/23/2024

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include <sstream>

using std::setw;
using std::setfill;
using std::left;
using std::right;


class Student{
    private:
        int sid = 0;
        std::string fName = "";
        std::string lName = "";
        std::string address = "";
        long phoneNumber = 0;
        std::string grades = "";
        int count = 0;

    public:
        //constructors
        explicit Student();
        explicit Student(int aSID, std::string aFName, std::string aLName, std::string anAddress, long aPhone, std::string aGrades, int aCount);

        //getters

        int getSID();
        std::string getFName();
        std::string getLName();
        std::string getAddress();
        long getPhone();
        int getCount();

        //setters

        void setSID(int theSID);
        void setFName(std::string theFName);
        void setLName(std::string theLName);
        void setAddress(std::string theAddress);
        void setPhone(long thePhone);

        void setCount();
        /* int?*/

        //additional functions

        int getGrade(int location);
        void setStudent(int aSID, std::string aFName, std::string aLName,
                        std::string anAddress, long aPhone, std::string aGrades
                        );
        void displayStudent();
        void addGrade(int theGrade);
        std::string convertLetterGrade(const int theLetterGrade);
        std::string currentLetterGrade();
        void listGrades();

};

#endif