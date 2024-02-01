//TODO - Add the Program Assignment boilerplate comment block here. You can find its template in the C++ Code Style Guide
//Title: main.cpp
//Desc: includes main.cpp
//Desc: Demonstrates the the use of functions built in functions.cpp and associated files.
//      Prompts user for 9 input integers. Using the user input and Simpson's Rule calculates
//      and displays area, volume, fish to stock, and licenses to issue for the lake.
//Name: Elijah Heimsoth
//Class: 2312 H01
//Date: 02/01/2024
#include <iostream>
#include "functions.h"

// TODO - Build a main function for testing your code.

int main(){
    //Declaration of variables. Vars set to associated function return value.
    int lakeArea = calculateLakeArea();
    float lakeVolume = calculateLakeVolume(lakeArea);
    int fishStock = calculateFishStock(lakeVolume);
    int maxLicenses = calculateMaxLicenses(fishStock);

    //Console outputs of the above variables in user friendly/readable format.
    //Lake Area
    std::cout << "The area of the lake is: " << lakeArea << std::endl;
    //Lake Volume
    std::cout << "The volume of the lake is: " << lakeVolume << std::endl;
    //Number of fish to stock lake with.
    std::cout << "The lake will be stocked with: " << fishStock << " fish." << std::endl;
    //Max number of licenses to issue for lake.
    std::cout << "There will be a maximum of: " << maxLicenses << " licenses issued." << std::endl;

    return 0;
}
