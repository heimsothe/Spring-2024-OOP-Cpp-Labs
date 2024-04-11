#ifndef AMORTIZEDLOAN_H
#define AMORTIZEDLOAN_H

#include "Loan.h"

class AmortizedLoan : public Loan {
public:
    // Default constructor
    AmortizedLoan();

    // Parameterized constructor
    AmortizedLoan(float aPrincipal, float aInterestRate, int aLoanLength);

    // Override the monthly payment function
    float monthlyPayment() override;
};

#endif