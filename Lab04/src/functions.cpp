/********************************************************
Name      :  Elijah Heimsoth
Class     :  CSCI 2312 Section H01
PA#       :  PA4 Classes and Functions
Due Date  :  03/01/2024
*********************************************************
*********************************************************
* Summary: This file includes the implementation for the
* functions protyped in functions.h).

* The functions work with arrays and generate, modify,
* and display them in different ways.

* Created: 02/29/2024
********************************************************/

#include <string>
#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
#include <cmath>
    using std::pow;
    using std::sqrt;
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

float average(array<float, MAX_SIZE>& anArray, int& anInt){
    float sum = 0;
    float avg = 0;

    for(int ndx = 0; ndx < anInt; ndx++){
        sum += anArray[ndx];
    }

    avg = sum/anInt;

    return avg;
}

void maxAndMin(array<float, MAX_SIZE>& anArray, int& anInt, float& max, float& min){
    max = anArray[0];
    min = anArray[0];

    for (int ndx = 1; ndx < anInt; ndx++){
        float element = anArray[ndx];
        if (element < min){
            min = element;
        }
        else if (element > max){
            max = element;
        }
    }
}

float standardDev(array<float, MAX_SIZE>& anArray, int& anInt){
    float inputCount = anInt; // n : number of input #'s
    float avgOfInputs = 0; // u : avg of inputted data
    float sumOfInputs = 0;
    float sum = 0;
    float stdDev = 0; //final answer

    for(int ndx = 0; ndx < anInt; ndx++){
        sumOfInputs += anArray[ndx];
    }

    avgOfInputs = sumOfInputs / inputCount;

    for(int ndx = 0; ndx < anInt; ndx++){
        float element = anArray[ndx];
        sum += pow(element - avgOfInputs, 2);
    }

    stdDev = sqrt(sum / (anInt - 1));

    return stdDev;
}

void display(array<float, MAX_SIZE>& anArray, int& anInt){
    int gradeCount = anInt;
    float maxGrade = 0;
    float minGrade = 0;
    maxAndMin(anArray, anInt, maxGrade, minGrade);

    cout << gradeCount << " grades were entered" << endl;
    cout << "The values are : " << endl;

    for(int ndx = 0; ndx < gradeCount; ndx++){
        cout << anArray[ndx] << " ";

        if((ndx + 1) % 5 == 0){
            cout << endl;
        }
    }
    cout << endl;

    cout << "The average of the " << gradeCount << " numbers is : " << average(anArray, anInt) << endl;
    cout << "The minimum number is : " << minGrade << endl;
    cout << "The maximum number is : " << maxGrade << endl;
    cout << "The standard deviation is : " << standardDev(anArray, anInt) << endl;
}
