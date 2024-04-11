/*
file: main.cpp
Name: Elijah Heimsoth
Date: 4/11/2024
Description: This is the main file for the Loan program.
It contains the main function that tests the Loan classes.

FUNCTIONS:

// Main function
int main();
Receives: Nothing
Returns: 0
Description: This is the main function for the Loan program.
*/

#include "Loan.h"
#include "SimpleLoan.h"
#include "AmortizedLoan.h"
#include <iostream>

int main() {
    // Create an empty simple loan
    SimpleLoan emptySimpleLoan;
    std::cout << "Empty Simple Loan:" << std::endl;
    emptySimpleLoan.displayLoan();
    std::cout << std::endl;

    // Create a simple loan with parameters
    // simpleLoan(float aPrincipal, float aInterestRate, int aLoanLength)
    SimpleLoan testSimpleLoan(1000, 5, 4);
    std::cout << "Simple Loan:" << std::endl;
    testSimpleLoan.displayLoan();
    std::cout << std::endl;

    // Create an empty Amortized Loan
    AmortizedLoan emptyAmortizedLoan;
    std::cout << "Empty Amortized Loan:" << std::endl;
    emptyAmortizedLoan.displayLoan();
    std::cout << std::endl;

    // Create an Amortized Loan with parameters
    //amortizedLoan(float aPrincipal, float aInterestRate, int aLoanLength)
    AmortizedLoan testAmortizedLoan(1000, 5, 5);
    std::cout << "Amortized Loan:" << std::endl;
    testAmortizedLoan.displayLoan();
    std::cout << std::endl;

    // Test saveLoan function
    testSimpleLoan.saveLoan();
    testAmortizedLoan.saveLoan();

    return 0;

}