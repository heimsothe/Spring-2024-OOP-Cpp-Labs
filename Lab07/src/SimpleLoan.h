/*
file: SimpleLoan.h
Name: Elijah Heimsoth
Date: 4/11/2024
Description: This is the header file for the SimpleLoan class.
It contains the prototyping for the class.

FUNCTIONS:

// Default constructor
SimpleLoan();
Receives: Nothing
Returns: Nothing
Description: This is the default constructor for the SimpleLoan class.

// Parameterized constructor
explicit SimpleLoan(float aPrincipal, float aInterestRate, int aLoanLength);
Receives: aPrincipal, aInterestRate, aLoanLength
Returns: Nothing
Description: This is the parameterized constructor for the SimpleLoan class.

// Destructor
virtual ~SimpleLoan();
Receives: Nothing
Returns: Nothing
Description: This is the destructor for the SimpleLoan class.

// Override the monthly payment function
float monthlyPayment() override;
Receives: Nothing
Returns: a float
Description: This function overrides the monthly payment function from the Loan class.
It calculates the monthly payment for a simple loan.
*/

#ifndef SIMPLELOAN_H
#define SIMPLELOAN_H

#include "Loan.h"

class SimpleLoan : public Loan {
public:
    // Default constructor
    SimpleLoan();

    // Parameterized constructor
    explicit SimpleLoan(float aPrincipal, float aInterestRate, int aLoanLength);

    // Virtual destructor
    virtual ~SimpleLoan();

    // Override the monthly payment function
    float monthlyPayment() override;
};

#endif