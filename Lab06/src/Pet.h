/********************************************************
Name      :  Elijah Heimsoth
Class     :  CSCI 2312 Section H01
PA#       :  PA6
Due Date  :  04/05/2024
*********************************************************
*********************************************************
* Summary: This file contains prototyping for the Pet
  class implemented in Pet.cpp

* Created: 04/04/2024
********************************************************/
#ifndef PET_H
#define PET_H

#include "Date.h"
#include <string>
#include <iostream>

class Pet {
private:
    std::string name;
    Date DOB;
    std::string type;
    std::string breed;

public:
    // Constructors
    Pet(); // Default constructor
    Pet(const std::string& aName, const Date& aDOB, const int& aTypeNum, const std::string& aBreed);

    // Getters
    std::string getName();
    Date getDOB();
    std::string getType();
    std::string getBreed();

    // Setters
    void setName(const std::string& theName);
    void setDOB(const int& theMonth, const int& theDay, const int& theYear);
    void setType(const int& theTypeNum); //switch case (int to string)
    void setBreed(const std::string& theBreed);

    // Friends
    friend std::istream& operator>>(std::istream& in, Pet& pet); // for input
    friend std::ostream& operator<<(std::ostream& out, Pet& pet); // for output
};

#endif