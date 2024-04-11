/*
file: Loan.cpp
Name: Elijah Heimsoth
Date: 4/11/2024
Description: This is the implementation file for the Loan class.
It contains the implementation of the class functions.

FUNCTIONS:

// Default constructor
Loan();
Receives: Nothing
Returns: Nothing
Description: This is the default constructor for the Loan class.

// Parameterized constructor
explicit Loan(float aPrincipal, float aInterestRate, int aLoanLength, std::string aLoanType);
Receives: aPrincipal, aInterestRate, aLoanLength, aLoanType
Returns: Nothing
Description: This is the parameterized constructor for the Loan class.

// Destructor
virtual ~Loan();
Receives: Nothing
Returns: Nothing
Description: This is the destructor for the Loan class.

// Getters
float getPrincipal();
Receives: Nothing
Returns: a float, principal
Description: This function returns the principal of the loan.

float getInterestRate();
Receives: Nothing
Returns: a float, interestRate
Description: This function returns the annual interest rate of the loan.

float getLoanLength();
Receives: Nothing
Returns: an float, loanLength
Description: This function returns the length of the loan in years.

std::string getLoanType();
Receives: Nothing
Returns: a string, loanType
Description: This function returns the type of the loan.

// Setters
void setPrincipal(float thePrincipal);
Receives: a float, thePrincipal
Returns: Nothing
Description: This function sets the principal of the loan.

void setInterestRate(float theInterestRate);
Receives: a float, theInterestRate
Returns: Nothing
Description: This function sets the annual interest rate of the loan.

void setLoanLength(int theLoanLength);
Receives: an int, theLoanLength
Returns: Nothing
Description: This function sets the length of the loan in years.

void setLoanType(std::string theLoanType);
Receives: a string, theLoanType
Returns: Nothing
Description: This function sets the type of the loan.

// Base class functions
virtual float monthlyPayment() = 0; // Pure virtual function
Receives: Nothing
Returns: a float, monthlyPayment
Description: This function calculates the monthly payment of the loan.

void displayLoan();
Receives: Nothing
Returns: Nothing
Description: This function displays the loan information to the console.

// File I/O
void saveLoan();
Receives: Nothing
Returns: Nothing
Description: This function saves the loan information to a file.
*/

#include "Loan.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

// Default constructor
Loan::Loan() {
    principal = 0.0f;
    interestRate = 0.0f;
    loanLength = 0;
    loanType = "";
}

// Parameterized constructor
Loan::Loan(float aPrincipal, float aInterestRate, int aLoanLength, std::string aLoanType) {
    principal = aPrincipal;
    interestRate = aInterestRate;
    loanLength = aLoanLength;
    loanType = aLoanType;
}

// Virtual destructor
Loan::~Loan() {
    // Empty
}

// Getters
float Loan::getPrincipal() {
    return principal;
}

float Loan::getInterestRate() {
    return interestRate;
}

float Loan::getLoanLength() {
    float loanLengthFloat = static_cast<float>(loanLength);
    return loanLengthFloat;
}

std::string Loan::getLoanType() {
    return loanType;
}

// Setters
void Loan::setPrincipal(float thePrincipal) {
    principal = thePrincipal;
}

void Loan::setInterestRate(float theInterestRate) {
    interestRate = theInterestRate;
}

void Loan::setLoanLength(int theLoanLength) {
    loanLength = theLoanLength;
}

void Loan::setLoanType(std::string theLoanType) {
    loanType = theLoanType;
}

// displayLoan: Outputs the loan information to the console
void Loan::displayLoan() {
    std::cout << "Loan Overview" << std::endl;
    std::cout << std::string(32, '=') << std::endl;
    std::cout << std::setw(18) << std::left << "Loan Type:" << getLoanType() << std::endl;
    std::cout << std::setw(18) << std::left << "Principal:" << getPrincipal() << std::endl;
    std::cout << std::setw(18) << std::left << "Interest Rate:" << getInterestRate() << "%" << std::endl;
    std::cout << std::setw(18) << std::left << "Length in Years:" << getLoanLength() << std::endl;
    std::cout << std::setw(18) << std::left << "Monthly Payment:" << monthlyPayment() << std::endl;
}


// saveLoan: Writes the loan information to a file
void Loan::saveLoan() {
    // Directory and file name
    const std::string directory = "data/";
    const std::string filename = "loans.txt";

    // Open file in output mode (overwrites existing file or creates a new one if it doesn't exist)
    std::ofstream outFile(directory + filename, std::ios::out);

    // Write the loan information to the file
    outFile << getPrincipal() << " "
            << getInterestRate() << " "
            << getLoanLength() << " "
            << std::endl;
        
    // Close the file
    outFile.close();
    
    /*
    // Check if the file is open
    if (outFile.is_open()) {
        // Write the loan information to the file
        outFile << getPrincipal() << " "
                << getInterestRate() << " "
                << getLoanLength() << " "
                << std::endl;
        
        // Close the file
        outFile.close();
    } else {
        std::cerr << "Unable to open file for writing." << std::endl;
    }
    */
}
