/********************************************************
Name      :  Elijah Heimsoth
Class     :  CSCI 2312 Section H01
PA#       :  PA4 Classes and Functions
Due Date  :  03/01/2024
*********************************************************
*********************************************************
* Summary: This file includes the prototyping for the
* functions implemented in functions.cpp).

* The functions work with arrays and generate, modify,
* and display them in different ways.

* Created: 02/29/2024
********************************************************/

/* Function Descriptions
    //CONSTRUCTORS
    OrderedPair();
    OrderedPair(double anX, double anY);

    //GETTERS
    double getX();
    // receives nothing
    // returns x value as a double

    int getInput(array<float, MAX_SIZE>& anArray);
    // takes user input floats to populate an array
    // receives an empty array
    // returns an int of the array's length after population

    void randInput(array<float, MAX_SIZE>& anArray, int& anInt);
    // populates array with random values
    // receives an empty array and int of number of elements to populate
    // returns nothing

    float average(array<float, MAX_SIZE>& anArray, int& anInt);
    // calculates the average of values in an array
    // receives an array and an int of array length
    // returns a float of the average

    void maxAndMin(array<float, MAX_SIZE>& anArray, int& anInt, float& max, float& min);
    // calulates the min and max of an array
    // receives an array, an int of array length, max placeholder, min placeholder
    // returns nothing

    float standardDev(array<float, MAX_SIZE>& anArray, int& anInt);
    // calculates the standard deviation of values in an array
    // receives an array and an int of array length
    // returns a float of the standard deviation

    void display(array<float, MAX_SIZE>& anArray, int& anInt);
    // displays formatted information on grades
    // displays: number of grades, the grades, average grade, max grade,
    // min grade, and standard deviation
    // receives an array of grades and the number of grades (array length)
    // returns nothing
*/

#include <string>
#include <iostream>
#include <cmath>
#include <array>
    using std::array;
#include <random>
#include <cstddef>
#include <ctime>
#include <iomanip>

const size_t MAX_SIZE = 50;

int getInput(array<float, MAX_SIZE>& anArray);

void randInput(array<float, MAX_SIZE>& anArray, int& anInt);

float average(array<float, MAX_SIZE>& anArray, int& anInt);

void maxAndMin(array<float, MAX_SIZE>& anArray, int& anInt, float& max, float& min);

float standardDev(array<float, MAX_SIZE>& anArray, int& anInt);

void display(array<float, MAX_SIZE>& anArray, int& anInt);