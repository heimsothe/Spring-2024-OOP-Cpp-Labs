#include "Address.h"
#include <algorithm>
#include <iomanip>

// Default constructor
Address::Address() {
    street = "";
    city = "";
    state = "";
    zipCode = 0;
}


// Full constructor
Address::Address(const std::string& aStreet, const std::string& aCity, const std::string& aState, const size_t& aZipCode) {
    street = aStreet;
    city = aCity;
    state = aState;
    zipCode = aZipCode;
}

// Getters
std::string Address::getStreet() const {
    return street;
}

std::string Address::getCity() const {
    return city;
}

std::string Address::getState() const {
    return state;
}

size_t Address::getZip() const {
    return zipCode;
}

// Setters
void Address::setStreet(const std::string& theStreet) {
    street = theStreet;
    std::transform(street.begin(), street.end(), street.begin(), toupper);
}

void Address::setCity(const std::string& theCity) {
    city = theCity;
    std::transform(city.begin(), city.end(), city.begin(), toupper);
}

void Address::setState(const std::string& theState) {
    state = theState;
    std::transform(state.begin(), state.end(), state.begin(), toupper);
}

void Address::setZip(const size_t& theZipCode) {
    zipCode = theZipCode;
}

// Friend I/O operators
std::istream& operator>>(std::istream& in, Address& address) {
    getline(in, address.street);
    getline(in, address.city);
    getline(in, address.state);
    in >> address.zipCode;
    // Clear the newline character after reading zipCode
    in.ignore(10000, '\n');
    //in.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Alternative way to clear the newline character

    // Convert to uppercase
    std::transform(address.street.begin(), address.street.end(), address.street.begin(), toupper);
    std::transform(address.city.begin(), address.city.end(), address.city.begin(), toupper);
    std::transform(address.state.begin(), address.state.end(), address.state.begin(), toupper);

    return in;
}

std::ostream& operator<<(std::ostream& out, const Address& address) {
    out << std::left << std::setw(13) << "STREET" << ": " << std::setw(21) << address.street << "\n";
    out << std::left << std::setw(13) << "CITY" << ": " << std::setw(21) << address.city << "\n";
    out << std::left << std::setw(13) << "STATE" << ": " << std::setw(21) << address.state << "\n";
    out << std::left << std::setw(13) << "ZIP CODE" << ": " << std::setw(21) << address.zipCode << "\n";
    return out;
}