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
    //srand(static_cast<unsigned int>(time(0)));
    size_t numRange = getNumberRange();
    cout << "Entered range is 0-" << numRange << endl;
    size_t numSize = getNumberSize();
    cout << "Quanity to generate entered: " << numSize;
    cout << endl;

    size_t genNum = genRandomNumber(numRange);
    cout << "Random number 1-" << numRange << ": " << genNum << endl;
    cout << endl;

    int scaledNum = scaleNumber(genNum, numRange);
    cout << genNum << ", [0, " << numRange << "] scaled to [" << -1*static_cast<int>(numRange) << ", " << numRange << "]: "
         << scaledNum << endl;
    cout << endl;

    vector<int> myVec;
    cout << "myVec VECTOR: " << endl;
    fillVector(myVec, numRange, numSize);
    for(int i = 0; i < myVec.size(); i++){
        cout << setw(6) << myVec[i] << " ";
    }
    cout << endl;
    cout << endl;

    printStars(myVec);

    return 0;



    /*
    size_t userRange = getNumberRange();

    size_t genNum = genRandomNumber(userRange);

    cout << "genNum is: " << genNum << endl;

    size_t numScale;
    cout << "Enter a number to scale to range [-number, +number]: ";
    cin >> numScale;

    int scaledNumber = scaleNumber(genNum, numScale);

    cout << "Scaled Number in range [-" << numScale << ", +" << numScale << "]: " << scaledNumber << endl;

    return 0;
    */
}