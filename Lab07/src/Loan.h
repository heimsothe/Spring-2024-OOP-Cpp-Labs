/*
file: Loan.h
Name: Elijah Heimsoth
Date: 4/11/2024
Description: This is the header file for the Loan class.
It contains the prototyping for the class.

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

#ifndef LOAN_H
#define LOAN_H

#include <string>

class Loan {
protected:
    float principal;
    float interestRate;
    int loanLength;
    std::string loanType;

public:
    // Default constructor
    Loan();

    // Parameterized constructor
    explicit Loan(float aPrincipal, float aInterestRate, int aLoanLength, std::string aLoanType);

    // Destructor
    virtual ~Loan();

    // Getters
    float getPrincipal();
    float getInterestRate();
    float getLoanLength();
    std::string getLoanType();

    // Setters
    void setPrincipal(float thePrincipal);
    void setInterestRate(float theInterestRate);
    void setLoanLength(int theLoanLength);
    void setLoanType(std::string theLoanType);

    // Base class functions
    virtual float monthlyPayment() = 0; // Pure virtual function
    void displayLoan();

    // File I/O
    void saveLoan();
};

#endif
