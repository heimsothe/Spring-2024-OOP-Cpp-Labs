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
    size_t userRange = getNumberRange();

    size_t genNum = genRandomNumber(userRange);

    cout << "genNum is: " << genNum << endl;

    size_t numScale;
    cout << "Enter a number to scale to range [-number, +number]: ";
    cin >> numScale;

    int scaledNumber = scaleNumber(genNum, numScale);

    cout << "Scaled Number in range [-" << numScale << ", +" << numScale << "]: " << scaledNumber << endl;

    return 0;
}