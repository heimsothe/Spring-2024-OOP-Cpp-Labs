//TODO - Add the Program Assignment boilerplate comment block here. You can find its template in the C++ Code Style Guide

#include <iostream>
#include "functions.h"

// TODO - Build a main function for testing your code.

int main(){
    int lakeArea = calculateLakeArea();
    float lakeVolume = calculateLakeVolume(lakeArea);
    int fishStock = calculateFishStock(lakeVolume);
    int maxLicenses = calculateMaxLicenses(fishStock);

    std::cout << "The area of the lake is: " << lakeArea << std::endl;

    std::cout << "The volume of the lake is: " << lakeVolume << std::endl;

    std::cout << "The lake will be stocked with: " << fishStock << " fish." << std::endl;

    std::cout << "There will be a maximum of: " << maxLicenses << " licenses issued." << std::endl;

    return 0;


}
