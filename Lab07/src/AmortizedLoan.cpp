/*
file: AmortizedLoan.cpp
Name: Elijah Heimsoth
Date: 4/11/2024
Description: This is the implementation file for the AmortizedLoan class.
It contains the implementation of the class functions.

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

#include "AmortizedLoan.h"
#include <cmath>

// Default constructor
AmortizedLoan::AmortizedLoan() {};

/* ^^^EQUIVALENT TO^^^:
AmortizedLoan::AmortizedLoan() {
    principal = 0.0f;
    interestRate = 0.0f;
    loanLength = 0;
    loanType = "";
}
*/

// Parameterized constructor
AmortizedLoan::AmortizedLoan(float aPrincipal, float aInterestRate, int aLoanLength) 
    : Loan(aPrincipal, aInterestRate, aLoanLength, "Amortized Loan") {}

/* ^^^EQUIVALENT TO^^^:
AmortizedLoan::AmortizedLoan(float aPrincipal, float aInterestRate, int aLoanLength) {
    principal = aPrincipal;
    interestRate = aInterestRate;
    loanLength = aLoanLength;
    loanType = "Amortized Loan";
}
*/

// Destructor
AmortizedLoan::~AmortizedLoan() {
    // Empty
}

// Override the monthly payment function
float AmortizedLoan::monthlyPayment() {
    // MONTHLY PAYMENT: (P * R * ((1+R)^L) ) / (((1+R)^L) - 1)
    // P = principal, R = monthly interest rate, L = total months
    float monthlyRate = interestRate / 1200.0f;
    int totalMonths = loanLength * 12;
    float monthlyPayment = (principal * monthlyRate * pow(1 + monthlyRate, totalMonths)) / (pow(1 + monthlyRate, totalMonths) - 1);
    return monthlyPayment;
}