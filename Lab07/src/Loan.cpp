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

int Loan::getLoanLength() {
    return loanLength;
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
