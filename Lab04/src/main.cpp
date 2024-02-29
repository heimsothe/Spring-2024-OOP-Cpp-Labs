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
    /*
    array<float, MAX_SIZE> userInpArr;
    cout << userInpArr[0] << endl;
    getInput(userInpArr);
    cout << userInpArr[0] << endl;
    */

    array<float, MAX_SIZE> randArr;
    int inp = 0;
    cout << "enter an int 1-50: ";
    cin >> inp;

    randInput(randArr, inp);

    cout << "size of randArr: " << randArr.size() << endl;

    for (int ndx = 0; ndx < randArr.size(); ++ndx){
        cout << randArr[ndx] << "  ";  // array index is the loop counter
    }
    cout << endl;


    return 0;
}