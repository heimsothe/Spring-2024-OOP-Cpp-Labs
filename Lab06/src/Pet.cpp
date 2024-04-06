#include "Pet.h"
#include "Date.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <iomanip>

// Default Constructor
Pet::Pet() {
    name = "";
    DOB = Date();
    type = "";
    breed = "";
}

// Parameterized Constructor
Pet::Pet(const std::string& aName, const Date& aDOB, const int& aType, const std::string& aBreed) {
    setName(aName);
    DOB = aDOB;
    setType(aType);
    setBreed(aBreed);
}

// Getters
std::string Pet::getName() {
    return name;
}

Date Pet::getDOB() {
    return DOB;
}

std::string Pet::getType() {
    return type;
}

std::string Pet::getBreed() {
    return breed;
}

// Setters
void Pet::setName(const std::string& theName) {
    name = theName;
    std::transform(name.begin(), name.end(), name.begin(), toupper);
}

void Pet::setDOB(const int& theMonth, const int& theDay, const int& theYear) {
    DOB = Date(theMonth, theDay, theYear);
}

void Pet::setType(const int& typeNum) {
    switch (typeNum) {
        case 1:
            type = "DOG";
            break;
        case 2:
            type = "CAT";
            break;
        case 3:
            type = "BIRD";
            break;
        case 4:
            type = "SNAKE";
            break;

        default:
            std::cout << "Enter pet type: ";
            std::cin >> type;
            std::transform(type.begin(), type.end(), type.begin(), toupper);
            break;
    }
}

void Pet::setBreed(const std::string& theBreed) {
    breed = theBreed;
    std::transform(breed.begin(), breed.end(), breed.begin(), toupper);
}

// Friend I/O operators
std::istream& operator>>(std::istream& in, Pet& pet) {
    // Name
    std::cout << "Enter pet name: ";
    getline(in, pet.name);
    // Convert name to uppercase
    std::transform(pet.name.begin(), pet.name.end(), pet.name.begin(), toupper);

    // DOB
    int theMonth, theDay, theYear;
    std::cout << "Enter pet birth month: ";
    in >> theMonth;
    std::cout << "Enter pet birth day: ";
    in >> theDay;
    std::cout << "Enter pet birth year: ";
    in >> theYear;
    pet.setDOB(theMonth, theDay, theYear);
    // Clear the newline character
    in.ignore(10000, '\n');

    // Type
    std::cout << "Enter pet type (1 = DOG, 2 = CAT, 3 = BIRD, 4 = SNAKE): ";
    int theTypeNum;
    in >> theTypeNum;
    pet.setType(theTypeNum);
    // Clear the newline character
    in.ignore(10000, '\n');

    // Breed
    std::cout << "Enter pet breed: ";
    getline(in, pet.breed);
    // Convert breed to uppercase
    std::transform(pet.breed.begin(), pet.breed.end(), pet.breed.begin(), toupper);

    return in;
}

/*
std::istream& operator>>(std::istream& in, Pet& pet) {
    std::string month, day, year;
    getline(in, pet.name);
    getline(in, month);
    getline(in, day);
    getline(in, year);
    getline(in, address.city);
    getline(in, address.state);
    in >> address.zipCode;
    return in;
}
*/

std::ostream& operator<<(std::ostream& out, Pet& pet) {
    out << std::left << std::setw(13) << "NAME" << ":" << std::right << std::setw(21) << pet.name << "\n";
    out << std::left << std::setw(13) << "DOB" << ":" << std::right << std::setw(21) << pet.DOB.dateString() << "\n";
    out << std::left << std::setw(13) << "TYPE" << ":" << std::right << std::setw(21) << pet.type << "\n";
    out << std::left << std::setw(13) << "BREED" << ":" << std::right << std::setw(21) << pet.breed << "\n";
    return out;
}

/*
std::ostream& operator<<(std::ostream& out, const Pet& pet) {
    out << "NAME     : " << pet.getName() << "\n";
    out << "DOB      : " << pet.getDOB().dateString() << "\n";
    out << "TYPE     : " << pet.getType() << "\n";
    out << "BREED    : " << pet.getBreed() << "\n";
    return out;
}
*/
