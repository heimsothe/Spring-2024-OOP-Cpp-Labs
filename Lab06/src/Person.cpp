#include "Person.h"
#include <algorithm>
#include <iostream>
#include <iomanip>

// Default Constructor
Person::Person() {
    fName = "";
    lName = "";
    address = Address();
    pets = std::vector<Pet*>();
}

// Parameterized Constructors
Person::Person(const std::string& firstName, const std::string& lastName, const Address& address) {
    setFName(firstName);
    setLName(lastName);
    setAddress(address);
    pets = std::vector<Pet*>();
}

Person::Person(const std::string& firstName, const std::string& lastName) {
    setFName(firstName);
    setLName(lastName);
    address = Address();
    pets = std::vector<Pet*>();
}

// Getters
std::string Person::getFName() {
    return fName;
}

std::string Person::getLName() {
    return lName;
}

Address& Person::getAddress() {
    return address;
}

std::vector<Pet*>& Person::getPets() {
    return pets;
}

// Setters
void Person::setFName(const std::string& firstName) {
    fName = firstName;
    std::transform(fName.begin(), fName.end(), fName.begin(), toupper);
}

void Person::setLName(const std::string& lastName) {
    lName = lastName;
    std::transform(lName.begin(), lName.end(), lName.begin(), toupper);
}

void Person::setAddress(const Address& address) {
    this->address = address;
}

void Person::setStreet(const std::string& street) {
    address.setStreet(street);
}

void Person::setCity(const std::string& city) {
    address.setCity(city);
}

void Person::setState(const std::string& state) {
    address.setState(state);
}

void Person::setZip(const size_t& zip) {
    address.setZip(zip);
}

// FRIEND OPERATORS

// Turn + operator into a function that adds a pet to the vector of pets
void operator+(std::vector<Pet*>& pets, Pet* pet) {
    pets.push_back(pet);
}

// Turn - operator into a function that removes a pet from the vector of pets
void operator-(std::vector<Pet*>& pets, const std::string& petName) {
    for (auto itr = pets.begin(); itr != pets.end(); itr++) {
        if ((*itr)->getName() == petName) {
            delete *itr;
            itr = pets.erase(itr);
            return;
        }
        /*
        else {
            ++itr;
        }
        */
    }
}

std::istream& operator>>(std::istream& in, Person& person) {
    std::string fName, lName, street, city, state;
    size_t zipCode;

    std::cout << "Enter first name: ";
    getline(in, fName);
    std::cout << "Enter last name: ";
    getline(in, lName);
    std::cout << "Enter street: ";
    getline(in, street);
    std::cout << "Enter city: ";
    getline(in, city);
    std::cout << "Enter state: ";
    getline(in, state);
    std::cout << "Enter zip code: ";
    in >> zipCode;
    // Clear the newline character
    in.ignore(10000, '\n');

    person.setFName(fName);
    person.setLName(lName);
    person.setStreet(street);
    person.setCity(city);
    person.setState(state);
    person.setZip(zipCode);

    return in;
}

std::ostream& operator<<(std::ostream& out, Person& person) {
    out << std::left << std::setw(13) << "FIRST NAME" << ":" << std::right << std::setw(21) << person.fName << "\n";
    out << std::left << std::setw(13) << "LAST NAME" << ":" << std::right << std::setw(21) << person.lName << "\n\n";
    out << std::left << std::setw(13) << "ADDRESS";
    out << "\n" << person.address << "\n";

    out << std::left << std::setw(13) << "PETS LIST";
    if(person.pets.empty() == true){
         out << "\n" << std::left << "NONE" << "\n";
    }
    else{
        out << "\n";
        for (auto pet : person.pets) {
            out << *pet << "\n";
        }
    }

    return out;
}

// Other member functions
bool Person::searchPet(const std::string& petName) {
    std::string petNameUpper = petName;
    std::transform(petNameUpper.begin(), petNameUpper.end(), petNameUpper.begin(), toupper);
    for (auto pet : pets) {
        // if (pet->getName() == petName) {
        if (pet->getName() == petNameUpper) {
            return true;
        }
    }
    return false;
}

// Add a new pet to the vector of pets if the pet does not already exist
void Person::addPet() {
    Pet* newPet = new Pet();
    std::cin >> *newPet;
    std::string newPetName = newPet->getName();
    if (searchPet(newPetName) == true) {
        delete newPet;
        throw "Pet with same name already exists.";
    }
    else {
        pets + newPet;
    }
}

// Delete a pet from the vector of pets
void Person::deletePet() {
    std::string petName;
    std::cout << "Enter the name of the pet you would like to delete: ";
    std::cin >> petName;
    std::transform(petName.begin(), petName.end(), petName.begin(), toupper);
    if (searchPet(petName) == false) {
        std::cout << "Pet not found.";
    }
    else {
        pets - petName;
    }
}