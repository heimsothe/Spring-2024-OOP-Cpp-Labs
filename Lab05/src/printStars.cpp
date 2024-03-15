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