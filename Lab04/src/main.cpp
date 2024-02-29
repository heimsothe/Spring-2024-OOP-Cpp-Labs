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

int main(){
    array<float, MAX_SIZE> myArray;
    cout << myArray[0] << endl;
    getInput(myArray);
    cout << myArray[0] << endl;

    return 0;
}