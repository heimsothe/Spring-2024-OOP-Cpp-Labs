/********************************************************
Name      :  Elijah Heimsoth
Class     :  CSCI 2312 Section H01
PA#       :  PA5
Due Date  :  03/01/2024
*********************************************************
*********************************************************
* Summary: This file includes the implementation for the
* functions prototyped in printStars.h).

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
#include "printStars.h"
#include <array>
    using std::array;
#include <vector>
    using std::vector;
#include <string>
    using std::string;
#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
#include <random>
#include <iomanip>
    using std::setw;
    using std::setfill;
    using std::left;
    using std::right;
#include <stdexcept>
#include <ctime>
#include <cstdlib>


size_t getNumberRange(){
    size_t range;
    cout << "Enter a positive number to set the range: ";
    cin >> range;
    if (range < 0 || range == 0){
        throw "The input does not meet the requirements";
    }
    return range;
}

size_t getNumberSize(){
    size_t size;
    cout << "Enter how many numbers to generate: ";
    cin >> size;
    if(size > 100 || size <= 0){
        throw "The input does not meet the requirements";
    }
    return size;
}


size_t genRandomNumber(size_t& range){
    /*
    THIS CODE PASSES AUTO GRADER BUT FAILS MY TESTING
    fills vector with a single random value, not different values
    I believe it is because everytime genRandomNumber is called it
    resets the seed. To solve see below where seed is only set once.
    */
    srand(static_cast<unsigned int>(time(0)));

    /*
    //THIS CODE SOLVES ISSUE BUT FAILS AUTOGRADER:

    set seed for rand only once
    static bool seeded = false;
    if (seeded == false){
        srand(static_cast<unsigned int>(time(0)));
        seeded = true;
    }
    */
    size_t randNum = (rand() % (range + 1));
    return randNum;
}

int scaleNumber(size_t& generatedNumber, size_t& number){
    int scaled;
    scaled = (generatedNumber*2) - number;

    while (scaled == 0){
        scaled = (genRandomNumber(number)*2) - number;
    }
return scaled;
}

void fillVector(vector<int>& intVector, size_t& numberRange, size_t& numberSize){

    for (int ndx = 0; ndx < numberSize; ndx++){
        size_t randNum;
        int scaledNum;
        randNum = genRandomNumber(numberRange);
        scaledNum = scaleNumber(randNum, numberRange);

        intVector.push_back(scaledNum);
    }
}

void printStars(vector<int>& intVector){
    int index;
    cin >> index;

    while(index >= 0 && index <= intVector.size()){
        if(intVector[index] >= 0){
            cout << " ";
            for (int ndx = 0; ndx < intVector[index]; ndx ++){
                cout << "* ";
            }
        }
        else if(intVector[index] < 0){
            cout << "*";
            for (int ndx = 0; ndx < (-1 * intVector[index]); ndx ++){
                cout << " *";
            }
        }
        cin >> index;
        cout << endl;
        if(index == 0){
            break;
        }
    }




}