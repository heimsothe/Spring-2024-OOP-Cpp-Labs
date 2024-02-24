//Title: Student.cpp
//Desc: Implementation of Student class
//Name: Elijah Heimsoth
//Class: 2312 H01
//Date: 02/23/2024

#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include <sstream>
#include "Student.h"

using std::setw;
using std::setfill;
using std::left;
using std::right;


Student::Student(){

}

Student::Student(int aSID, std::string aFName, std::string aLName, std::string anAddress, long aPhone, std::string aGrade, int aCount){
    setSID(aSID);
    setFName(aFName);
    setLName(aLName);
    setAddress(anAddress);
    setPhone(aPhone);

    //we have a string of grades "80 70 60"
    std::istringstream gradeStream(aGrade);
    int grd;
    while(gradeStream >> grd){
        addGrade(grd);
    }
    //setCount(); -- REMOVED

    //No Clue If This Is Right
}

//getters
int Student::getSID(){
    return sid;
}
std::string Student::getFName(){
    return fName;
}
std::string Student::getLName(){
    return lName;
}
std::string Student::getAddress(){
    return address;
}
long Student::getPhone(){
    return phoneNumber;
}
int Student::getCount(){
    return count;
}


//setters
void Student::setSID(int theSID){
    sid = theSID;
}
void Student::setFName(std::string theFName){
    fName = theFName;
}
void Student::setLName(std::string theLName){
    lName = theLName;
}
void Student::setAddress(std::string theAddress){
    address = theAddress;
}
void Student::setPhone(long thePhone){
    phoneNumber = thePhone;
}

//COPY PASTA BE AWARE
void Student::setCount(){
    //set the counter to the number of grades in the string
    std::istringstream iss(grades);
    std::string value;

    int counter = 0;
    while (iss >> value){
        counter++;
    }
    count = counter;
}
//END OF COPY PASTA

//Additional Functions
//MORE COPY PASTA
int Student::getGrade(int location){
    //return the string value of the grade at the given location
    std::istringstream iss(grades);
    std::string value;

    int counter = 0;
    while (iss >> value){
        if (counter++ == location){
            return stoi(value);
        }
    }
    return -1;
}
//END OF COPY PASTA

//CURRENTLY Stacks grades ontop of any existing grades.
void Student::setStudent(int aSID, std::string aFName, std::string aLName, std::string anAddress, long aPhone, std::string aGrade){
    setSID(aSID);
    setFName(aFName);
    setLName(aLName);
    setAddress(anAddress);
    setPhone(aPhone);

    std::istringstream gradeStream(aGrade);
    int grd;
    while(gradeStream >> grd){
        addGrade(grd);
    }
    //setCount();
}

void Student::displayStudent(){
    //line of asterisks
    std::cout << setfill('*') << setw(34) << '*' << std::endl;
    //Rows of student info (note: setfill(' ') needed to replace the fill of '*'s)
    std::cout << std::left << setfill(' ') << setw(13) << "Student ID" << ":"
         << std::right << setw(20) << sid << std::endl;
    std::cout << std::left << setw(13) << "First Name" << ":"
         << std::right << setw(20) << fName << std::endl;
    std::cout << std::left << setw(13) << "Last Name" << ":"
         << std::right << setw(20) << lName << std::endl;
    std::cout << std::left << setw(13) << "Address" << ":"
         << std::right << setw(20) << address << std::endl;
    std::cout << std::left << setw(13) << "Phone Number" << ":"
         << std::right << setw(20) << phoneNumber << std::endl;
    std::cout << setfill('*') << setw(34) << '*' << std::endl;
}

void Student::addGrade(int theGrade){
    if((theGrade <= 100) & (theGrade >= 0)){
        std::string gradeStr = std::to_string(theGrade);

        grades += " " + gradeStr;
        setCount();

    }
}

/*
std::string convertLetterGrade(int)
Given a grade value (parameter), the method will return the corresponding letter grade.
Use our course grading scale from the syllabus to obtain the letter grade. (Change: If grade is between 0 and 60, then the letter grade is an 'F')
The integer value should be considered a valid grade.
Must be implemented using a switch statement.
*/
/*
std::string Student::convertLetterGrade(int theGrade){
    std::string letterGrade;
    int range;

    if(theGrade <= 60){
        range = 0;
    }
    else if(theGrade < 64){
        range = 1;
    }
    else if(theGrade < 67){
        range = 2;
    }
    else if(theGrade < 70){
        range = 3;
    }
    else if(theGrade < 74){
        range = 4;
    }
    else if(theGrade < 77){
        range = 5;
    }
    else if(theGrade < 80){
        range = 6;
    }
    else if(theGrade < 84){
        range = 7;
    }
    else if(theGrade < 87){
        range = 8;
    }
    else if(theGrade < 90){
        range = 9;
    }
    else if(theGrade < 94){
        range = 10;
    }
    else if(theGrade <= 100){
        range = 11;
    }

    switch(range){
        case 0:
        {
            letterGrade = "F";
            break;
        }
        case 1:
        {
            letterGrade = "D-";
            break;
        }
        case 2:
        {
            letterGrade = "D";
            break;
        }
        case 3:
        {
            letterGrade = "D+";
            break;
        }
        case 4:
        {
            letterGrade = "C-";
            break;
        }
        case 5:
        {
            letterGrade = "C";
            break;
        }
        case 6:
        {
            letterGrade = "C+";
            break;
        }
        case 7:
        {
            letterGrade = "B-";
            break;
        }
        case 8:
        {
            letterGrade = "B";
            break;
        }
        case 9:
        {
            letterGrade = "B+";
            break;
        }
        case 10:
        {
            letterGrade = "A-";
            break;
        }
        case 11:
        {
            letterGrade = "A";
            break;
        }
    }
    return letterGrade;
}

std::string Student::currentLetterGrade(){
    return "";
}
*/

void Student::listGrades(){

}







