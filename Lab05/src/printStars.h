/********************************************************
Name      :  Elijah Heimsoth
Class     :  CSCI 2312 Section H01
PA#       :  PA5
Due Date  :  03/01/2024
*********************************************************
*********************************************************
* Summary: This file includes the prototyping for the
* functions implemented in printStars.cpp).

* The functions work vectors, numbers, and user input

* Created: 03/14/2024
********************************************************/

/* FUNCTION DESCRIPTIONS:

size_t getNumberRange();
//receives nothing
//returns an size_t number entered from the keyboard, represents range 0-number

size_t getNumberSize();
//receives nothing
//returns an size_t number entered from the keyboard, represents quantity to generate

size_t genRandomNumber(size_t&);
//receives size_t range ( 0 to range) by reference
//displays the array 10 numbers per row, each delimitted by a space
//returns an size_t number randomly generated between 0 and range.

int scaleNumber(size_t&, size_t&);
//receives randomly generated size_t number by reference, and size_t range by reference
//scales random number from [0, range] to [-range, +range]
//while the scaled number is 0, regenerates random number in range until non-zero
//returns scaled number

void fillVector(vector<int>&, size_t&, size_t&);
//receives an empt vector of ints by reference, size_t range by reference, and size_t size by reference
//fills the vector with size number elements, with random generated values between [-range, +range]
//returns nothing

void printStars(vector<int>&);
//receives a populated vector of ints by reference
//accesses and prints element in form of "*"s and " "s based on user input index
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

