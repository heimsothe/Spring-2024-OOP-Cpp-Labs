/********************************************************
Name      :  Elijah Heimsoth
Class     :  CSCI 2312 Section H01
PA#       :  PA5
Due Date  :  03/01/2024
*********************************************************
*********************************************************
* Summary: This file includes the program testing for the
* functions prototyped in printStars.h.

* The functions work vectors, numbers, and user input

* Created: 03/14/2024
********************************************************/

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

int main(){

    //getNumberRange TEST
    size_t numRange = getNumberRange();
    cout << "Entered range is 0-" << numRange << endl;
    //getNumberSize() TEST
    size_t numSize = getNumberSize();
    cout << "Quanity to generate entered: " << numSize;
    cout << endl;

    //genRandomNumber() TEST
    size_t genNum = genRandomNumber(numRange);
    cout << "Random number 1-" << numRange << ": " << genNum << endl;
    cout << endl;

    //scaleNumber() TEST
    int scaledNum = scaleNumber(genNum, numRange);
    cout << genNum << ", [0, " << numRange << "] scaled to [" << -1*static_cast<int>(numRange) << ", " << numRange << "]: "
         << scaledNum << endl;
    cout << endl;

    //fillVector() TEST
    vector<int> myVec;
    cout << "myVec VECTOR: " << endl;
    fillVector(myVec, numRange, numSize);
    for(int i = 0; i < myVec.size(); i++){
        cout << setw(6) << myVec[i] << " ";
    }
    cout << endl;
    cout << endl;
    //printStars() TEST
    printStars(myVec);

    return 0;
}