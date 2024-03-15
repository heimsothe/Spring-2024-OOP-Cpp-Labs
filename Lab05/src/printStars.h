/********************************************************
Name      :  Elijah Heimsoth
Class     :  CSCI 2312 Section H01
PA#       :  PA5
Due Date  :  03/01/2024
*********************************************************
*********************************************************
* Summary: This file includes the prototyping for the
* functions implemented in useArray.cpp).

* The functions work with arrays and populate, modify,
* and display them in different ways.

* Created: 03/14/2024
********************************************************/

/* FUNCTION DESCRIPTIONS:

int howMany();
//receives nothing
//returns an int entered from the keyboard

void fillArray(array<int, MAX_SIZE>& anEmptyArray, int& aRandNum);
//receives an empty array of ints, and a random int 1-100 (x)
//populates array with x number of random ints between 0 and 9999
//returns nothing

void printArray(array<int, MAX_SIZE>& aPopulatedArray, int& arrayLength);
//receives populated array of ints, and int of the array length
//displays the array 10 numbers per row, each delimitted by a space
//returns nothing

bool dupeCheck(array<int, MAX_SIZE>& aPopulatedArray, int& arrayLength);
//receives populated array of ints, and int of the array length
//checks array for any duplicates
//returns boolean true or false of whether duplicate exists

void sortArray(array<int, MAX_SIZE>& aPopulatedArray, int& arrayLength);
//receives a populated array of ints, and int of the array length
//arranges elements of the array in ascending numerical order
//returns nothing

*/

#include <vector>
    using std::vector;
#include <ctime>
#include <cstdlib>

size_t getNumberRange();
size_t getNumberSize();
size_t genRandomNumber(size_t&);
int scaleNumber(size_t&, size_t&);
void fillVector(vector<int>&, size_t&, size_t&);
void printStars(vector<int>&);

