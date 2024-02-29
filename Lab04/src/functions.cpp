#include <string>
#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
#include <cmath>
#include <array>
#include <random>
#include <cstddef>
#include <ctime>
#include <iomanip>

#include "functions.h"

// const size_t MAX_SIZE = 50; //maybe const int or const unsigned int

int getInput(array<float, MAX_SIZE>& anArray){
    bool sentinel = true;
    float userInput = 0;
    int arrayLength = 0; //also acts as index of array in while loop

    while(sentinel == true && arrayLength <= MAX_SIZE){
        cout << "Enter a float (-1 to quit): ";
        cin >> userInput;

        if (userInput == -1){
            sentinel = false;
        }
        else {
            anArray[arrayLength] = userInput;
            arrayLength++;
        }
    }

    return arrayLength;

}

void randInput(array<float, MAX_SIZE>& anArray, int& anInt){
    //anInt is number of random values desired (1-50)
    //if anInt < 1 || anInt > 100 --> terminate function

    //random values generate must be 1-100 using srand

    //set seed for rand
    srand(static_cast<unsigned int>(time(0)));

    if (anInt < 1 || anInt > 50){
        //terminate
        return;
    }
    else{
        for (int ndx = 0; ndx < anInt; ndx++){
            int randVal = (rand() % 100) + 1;
            anArray[ndx] = randVal;
        }
    }
}
