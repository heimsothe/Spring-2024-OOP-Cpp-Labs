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
    //set seed for rand
    srand(static_cast<unsigned int>(time(0)));
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
        randNum = genRandomNumber(numberRange);
        int scaledNum;
        scaledNum = scaleNumber(randNum, numberRange);

        intVector.push_back(scaledNum);
    }
}

void printStars(vector<int>& intVector){
    int index;
    cout << "Enter an index: ";
    cin >> index;

    while(index >= 0 && index <= intVector.size()){
        if(intVector[index] >= 0){
            cout << " ";
            for (int ndx = 0; ndx < intVector[index]; ndx ++){
                cout << "* ";
            }
            //cout << " " << string(intVector[index], '* ') << endl;
        }
        else if(intVector[index] < 0){
            cout << "*";
            for (int ndx = 0; ndx < intVector[index]; ndx ++){
                cout << " *";
            }
            //cout << "*" << string(intVector[index], ' *') << endl;
        }

        cout << "Enter another index (0 - QUIT): ";
        cin >> index;
        if(index == 0){
            break;
        }
    }




}



    /* FOR SCALE NUMBER
    #######################
    int scaled;
    scaled = -number + (generatedNumber % (number * 2));

    while(scaled == 0){
        scaled = -number + (genRandomNumber(number) % (number * 2));
    }
    */

    /*
    int scaledNumber;
    scaledNumber = static_cast<int>(generatedNumber) - static_cast<int>(number);
    while(scaledNumber == 0) {
        generatedNumber = genRandomNumber(number);
        scaledNumber = static_cast<int>(generatedNumber) - static_cast<int>(number);
    }
    */

    //int scaleNumber = -number + (generatedNumber * (number - (-number)) / maxOriginalRange);
    //scaleNumber = (generatedNumber % ((number*2)+1)) - number;
    /*
    while(scaleNumber == 0){
        scaleNumber = (genRandomNumber(number) % ((number*2)+1)) - number;
    }
    */


    //(genNum % ((scaleNum*2) +1)) - scaleNum