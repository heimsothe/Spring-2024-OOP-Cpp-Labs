#include "Loan.h"
#include "SimpleLoan.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

int main() {
    // Create an empty simple loan
    SimpleLoan emptySimpleLoan;
    std::cout << "Empty Simple Loan:" << std::endl;
    emptySimpleLoan.displayLoan();
    std::cout << std::endl;

    // Create a simple loan with parameters
    // simpleLoan(float aPrincipal, float aInterestRate, int aLoanLength)
    SimpleLoan testLoan(1000, 5, 6);
    std::cout << "Simple Loan:" << std::endl;
    testLoan.displayLoan();
    std::cout << std::endl;

    // Create an Amortized Loan
}