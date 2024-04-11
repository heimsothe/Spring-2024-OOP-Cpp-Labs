/*
file: SimpleLoan.cpp
Name: Elijah Heimsoth
Date: 4/11/2024
Description: This is the implementation file for the SimpleLoan class.
It contains the implementation of the class functions.

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

#include "SimpleLoan.h"

// Default constructor
SimpleLoan::SimpleLoan(){};

/* ^^^EQUIVALENT TO^^^:
SimpleLoan::SimpleLoan() {
    principal = 0.0f;
    interestRate = 0.0f;
    loanLength = 0;
    loanType = "";
}
*/

// Parameterized constructor
SimpleLoan::SimpleLoan(float aPrincipal, float aInterestRate, int aLoanLength) 
    : Loan(aPrincipal, aInterestRate, aLoanLength, "Simple Loan") {}

/* ^^^EQUIVALENT TO^^^:
SimpleLoan::SimpleLoan(float aPrincipal, float aInterestRate, int aLoanLength) {
    principal = aPrincipal;
    interestRate = aInterestRate;
    loanLength = aLoanLength;
    loanType = "Simple Loan";
}
*/

// Destructor
SimpleLoan::~SimpleLoan() {
    // Empty
}

// Override the monthly payment function
float SimpleLoan::monthlyPayment() {
    // MONTHLY PAYMENT: (P*(R*L + 1)) / L
    // P = principal, R = monthly interest rate, L = total months
    float monthlyRate = interestRate / 1200.0f;
    int totalMonths = loanLength * 12;
    float monthlyPayment = (principal * (monthlyRate * totalMonths + 1)) / totalMonths;
    return monthlyPayment;
}













