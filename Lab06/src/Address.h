/********************************************************
Name      :  Elijah Heimsoth
Class     :  CSCI 2312 Section H01
PA#       :  PA6
Due Date  :  04/05/2024
*********************************************************
*********************************************************
* Summary: This file contains prototyping for the Address
  class implemented in Address.cpp.

* Created: 04/04/2024
********************************************************/
#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
#include <iostream>

class Address {
    private:
        std::string street;
        std::string city;
        std::string state;
        size_t zipCode;

    public:
        // Constructors
        Address();
        Address(const std::string& aStreet, const std::string& aCity, const std::string& aState, const size_t& aZipCode);

        // Getters
        std::string getStreet();
        std::string getCity();
        std::string getState();
        size_t getZip();

        // Setters
        void setStreet(const std::string& theStreet);
        void setCity(const std::string& theCity);
        void setState(const std::string& theState);
        void setZip(const size_t& theZipCode);

        // Friends
        friend std::istream& operator>>(std::istream& in, Address& address); // for input
        friend std::ostream& operator<<(std::ostream& out, Address& address); // for output
};
#endif