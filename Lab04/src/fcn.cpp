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

#include "fcn.h"

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
