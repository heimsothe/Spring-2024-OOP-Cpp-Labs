#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
#include "Address.h"
#include "Pet.h"
#include <iostream>

class Person {
private:
    std::string fName;
    std::string lName;
    Address address;
    std::vector<Pet*> pets;

public:
    // Constructors
    Person();
    Person(const std::string& firstName, const std::string& lastName, const Address& address);
    Person(const std::string& firstName, const std::string& lastName);

    // Getters
    std::string getFName();
    std::string getLName();
    Address& getAddress();
    std::vector<Pet*>& getPets();

    // Setters
    void setFName(const std::string& firstName);
    void setLName(const std::string& lastName);
    void setAddress(const Address& addr);
    void setStreet(const std::string& street);
    void setCity(const std::string& city);
    void setState(const std::string& state);
    void setZip(const size_t& zip);

    // Friend operators
    friend void operator+(std::vector<Pet*>& pets, Pet* pet);
    friend void operator-(std::vector<Pet*>& pets, const std::string& petName);
    friend std::istream& operator>>(std::istream& in, Person& person);
    friend std::ostream& operator<<(std::ostream& out, Person& person);

    // Other member functions
    bool searchPet(const std::string& petName);
    void addPet();
    void deletePet();
};

#endif
