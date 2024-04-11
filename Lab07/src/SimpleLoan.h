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
    float monthlyPayment() const override;
};

#endif