//TODO - Add the appopriate file header here
//Title: functions.h
//Desc: header file for function.cpp
//Summary:
//Name: Elijah Heimsoth
//Class: 2312 H01
//Date: 02/01/2024

#include <iostream>
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

//TODO - Add header comments for each function using the template ad guidelines shown to you in class

// int getInput()
// desc: Prompts user to input an integer, which the function returns
// receives: nothing
// returns: input integer
int getInput();

// float calculateLakeArea
// desc: Uses Simpson's Rule (hardcoded to n = 8, b = 1600, a = 0) to calculate area of lake.
// desc: Uses getInput() to gather y values.
// receives: nothing
// returns: float lakeArea
float calculateLakeArea();

// float calculateLakeVolume
// desc: Calculates volume of lake via formula: area * depth (hardcoded to 20)
// receives: float areaOfLake
// returns: float lakeVolume
float calculateLakeVolume(float areaOfLake);

// int calculateFishStock
// desc: Calculates how many fish to stock lake with via formula: volumeOfLake/1000.
// desc: Hardcoded to 1 fish per 1000 cubic ft.
// receives: float volumeOfLake
// returns: int fishStock
int calculateFishStock(float volumeOfLake);

// int calculateMaxLicenses
// desc: Calculates number of licenses to issue based on the retention of 25% of original population and 20 fish per license.
// desc: Uses formula: (fishStock * 3/4) / 20
// receives: int fishStock
// returns: int licenseCount
int calculateMaxLicenses(int fishStock);

#endif