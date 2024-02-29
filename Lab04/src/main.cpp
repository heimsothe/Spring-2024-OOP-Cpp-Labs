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

//#include "fcn.h"

int main(){
    bool sentinel = true;
    float usrInput = 0;
    int count = 0;
    float sum = 0;

    while(sentinel == true){
        cout << "Enter a float (-1 to quit): ";
        cin >> usrInput;

        if (usrInput == -1){
            sentinel = false;
        }
        else {
            //add to array
            cout << usrInput << " value added to array" << endl;
            sum += usrInput;
            count++;
            cout << sum << " is the sum" << endl;
        }
    }
    cout << "count is: " << count << endl;
    return count;
}