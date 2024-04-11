/*
file: AmortizedLoan.h
Name: Elijah Heimsoth
Date: 4/11/2024
Description: This is the header file for the AmortizedLoan class.
It contains the prototyping for the class.

FUNCTIONS:

// Default constructor
AmortizedLoan();
Receives: Nothing
Returns: Nothing
Description: This is the default constructor for the AmortizedLoan class.

// Parameterized constructor
AmortizedLoan(float aPrincipal, float aInterestRate, int aLoanLength);
Receives: aPrincipal, aInterestRate, aLoanLength
Returns: Nothing
Description: This is the parameterized constructor for the AmortizedLoan class.

// Destructor
virtual ~AmortizedLoan();
Receives: Nothing
Returns: Nothing
Description: This is the destructor for the AmortizedLoan class.

// Override the monthly payment function
float monthlyPayment() override;
Receives: Nothing
Returns: a float
Description: This function overrides the monthly payment function from the Loan class.
It calculates the monthly payment for an amortized loan.
*/

#ifndef AMORTIZEDLOAN_H
#define AMORTIZEDLOAN_H

#include "Loan.h"

class AmortizedLoan : public Loan {
public:
    // Default constructor
    AmortizedLoan();

    // Parameterized constructor
    AmortizedLoan(float aPrincipal, float aInterestRate, int aLoanLength);

    // Destructor
    virtual ~AmortizedLoan();

    // Override the monthly payment function
    float monthlyPayment() override;
};

#endif