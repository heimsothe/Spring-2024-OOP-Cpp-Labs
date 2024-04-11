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
    float monthlyPayment = (principal * monthlyRate * pow(1 + monthlyRate, totalMonths)) / pow(1 + monthlyRate, totalMonths) - 1;
    return monthlyPayment;
}