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

//Empty Constructor
Student::Student(){

}

//Full parameter Constructor
Student::Student(int aSID, std::string aFName, std::string aLName, std::string anAddress, long aPhone, std::string aGrade, int aCount){
    setSID(aSID);
    setFName(aFName);
    setLName(aLName);
    setAddress(anAddress);
    setPhone(aPhone);

    //sets object grades
    //streams grades from aGrade into addGrade() which validates grades and adds to object
    std::istringstream gradeStream(aGrade);
    int grd;
    while(gradeStream >> grd){
        addGrade(grd);
    }
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

//setCount (copied from README)
//function will set the count of grades currently in object
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

//Additional Functions

//getGrade (copied from README)
//function will return the grade at given index of grades
int Student::getGrade(int location){
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


//function will replace data in existing Student object
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
}

//function will display student info in formatted view
void Student::displayStudent(){

    //line of 34 *'s
    std::cout << setfill('*') << setw(34) << '*' << std::endl;

    //Rows of student info (note: setfill(' ') needed to replace the fill of '*'s)
    //left aligned data type in a field of 13 characters
    //separated by ":"
    //right aligned data in field of 20 characters
    std::cout << left << setfill(' ') << setw(13) << "Student ID" << ":"
         << right << setw(20) << sid << std::endl;
    std::cout << left << setw(13) << "First Name" << ":"
         << right << setw(20) << fName << std::endl;
    std::cout << left << setw(13) << "Last Name" << ":"
         << right << setw(20) << lName << std::endl;
    std::cout << left << setw(13) << "Address" << ":"
         << std::right << setw(20) << address << std::endl;
    std::cout << std::left << setw(13) << "Phone Number" << ":"
         << std::right << setw(20) << phoneNumber << std::endl;
    std::cout << setfill('*') << setw(34) << '*' << std::endl;
}

//function will add a new grade to current grades
void Student::addGrade(int theGrade){

    //validates if theGrade is valid grade format
    if((theGrade <= 100) & (theGrade >= 0)){

        //converts int to string
        std::string gradeStr = std::to_string(theGrade);

        //adds grade to grades
        grades += " " + gradeStr;
        setCount();

    }
}

//function will convert number grades to letter grade based on grading scale
std::string Student::convertLetterGrade(int theGrade){
    std::string letterGrade;

    //sets percentage ranges for grades
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

    //switch case converts different grade percentage ranges to letter grad
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

//function will give current average grade of all grades, in letter form
std::string Student::currentLetterGrade(){
    std::istringstream gradeStream(grades);
    int grd;
    int grdSum;
    //streams grade from string grades into int format, adds int to grdSum
    while(gradeStream >> grd){
        grdSum += grd;
    }

    //takes average of grades (rounds down)
    int grdAvg = grdSum / count;

    //converts average grade to a letter grade
    std::string currGrade = convertLetterGrade(grdAvg);

    return currGrade;
}


//function will print to standard output a table with each of the grades and the cumulative average of grades.
void Student::listGrades(){
    int currGrade;
    int gradeSum = 0;
    float cumAvg;

    //outputs 14 *'s
    std::cout << setfill('*') << setw(14) << "*" <<std::endl;

    //outputs: "GRD" left aligned. A " ". Then "Cum.Avg." right aligned in a 10 character field
    std::cout << "GRD" << " " << right << setfill(' ') << setw(10) << "Cum.Avg." << std::endl;

    //outputs 14 *'s
    std::cout << setfill('*') << setw(14) << "*" <<std::endl;

    for(int counter = 0; counter < count; counter++){
        currGrade = getGrade(counter);
        gradeSum += currGrade;
        cumAvg = float(gradeSum)/(counter+1);

        //sets numbers to output with 2 decimal points
        std::cout << std::fixed << std::setprecision(2);

        //outputs currGrade right aligned in a field of 3 chars followed by a ' '
        //empty space will be filled with ' '
        std::cout << setfill(' ') << setw(3) << currGrade << " "
                  << setw(10) << cumAvg << std::endl;
                  //outputs cumAvg right aligned in a field of 10 characters
    }
}