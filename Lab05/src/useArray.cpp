/********************************************************
Name      :  Elijah Heimsoth
Class     :  CSCI 2312 Section H01
PA#       :  PA5
Due Date  :  03/01/2024
*********************************************************
*********************************************************
* Summary: This file includes the implementation for the
* functions prototyped in useArray.h).

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
#include "useArray.h"
#include <array>
    using std::array;
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

int howMany(){
    /*
    int userInput;

    cout << "Enter number of elements to generate (0-100): ";
    cin >> userInput;

    if (userInput < 1 || userInput > 100){
        throw "The input does not meet the requirements";
    }

    return userInput;
    */
    int userInput;
    cout << "Enter number of elements to generate (1-100): ";
    cin >> userInput;
    if (userInput > 100){
        throw ("The input does not meet the requirements");
    }
    return userInput;
}



void fillArray(array<int, MAX_SIZE>& anEmptyArray, int& aRandNum){
    //anInt is number of random values desired (1-50)
    //if anInt < 1 || anInt > 100 --> terminate function

    //random values generate must be 1-100 using srand

    //set seed for rand
    srand(static_cast<unsigned int>(time(0)));

    if (aRandNum < 1 || aRandNum > 100){
        //terminate
        return;
    }
    else{
        for (int ndx = 0; ndx < aRandNum; ndx++){
            int randVal = (rand() % 10000);
            anEmptyArray[ndx] = randVal;
        }
    }
}


void printArray(array<int, MAX_SIZE>& aPopulatedArray, int& arrayLength){
    for (int ndx = 0; ndx < arrayLength; ndx++){
        cout << aPopulatedArray[ndx] << " ";

        if ((ndx+1) % 10 == 0){
            cout << endl;
        }
    }
}


bool dupeCheck(array<int, MAX_SIZE>& aPopulatedArray, int& arrayLength){
    bool noDupes = true;
    for (int ndx = 0; ndx < arrayLength; ndx++){
        int currElem = aPopulatedArray[ndx];

        for (int ndx2 = ndx+1; ndx2 < arrayLength; ndx2++){
            int checkElem = aPopulatedArray[ndx2];

            if (currElem == checkElem){
                noDupes = false;
            }
        }
    }
    return noDupes;
}


void sortArray(array<int, MAX_SIZE>& aPopulatedArray, int& arrayLength){
    bool anySwaps = true;

    while (anySwaps == true){
        anySwaps = false;
        for (int ndx = 0; ndx < arrayLength - 1; ndx++){
            int currElem = aPopulatedArray[ndx];
            int nextElem = aPopulatedArray[ndx+1];

            if(currElem > nextElem){
                aPopulatedArray[ndx] = nextElem;
                aPopulatedArray[ndx+1] = currElem;
                anySwaps = true;
            }
            //ndx increments + 1
        }
        //checks for anySwaps true/false
    }
}
