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
    scaled = -number + (generatedNumber % (number * 2));


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
    return scaled;


    //(genNum % ((scaleNum*2) +1)) - scaleNum

}