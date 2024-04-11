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
    virtual float monthlyPayment() const = 0; // Pure virtual function
    void displayLoan();

    // File I/O
    void saveLoan();
};

#endif
