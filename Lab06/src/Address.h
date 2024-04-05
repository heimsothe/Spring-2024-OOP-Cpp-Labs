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
        friend std::ostream& operator<<(std::ostream& out, const Address& address); // for output
        friend std::istream& operator>>(std::istream& in, Address& address); // for input
};
#endif