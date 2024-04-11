#include "SimpleLoan.h"
//#include "Loan.h"

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













