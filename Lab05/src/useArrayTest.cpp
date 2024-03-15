#include "useArray.h"
#include <array>
    using std::array;
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


int main(){
    //howMany()
    int userNum = howMany();

    array<int, MAX_SIZE> myArr;

    //fillArray()
    fillArray(myArr, userNum);

    //printArray()
    printArray(myArr, userNum);

    cout << endl;

    //dupeCheck() TEST
    int smallNum = 5;
    array<int, MAX_SIZE> smallArr = {5, 3, 1, 2, 2};
    printArray(smallArr, smallNum);
    cout << endl;

    bool dupe = dupeCheck(smallArr, smallNum);
    string noDupes;
    if (dupe == true){
        noDupes = "True";
    }
    else{
        noDupes = "False";
    }
    cout << "dupeCheck found no duplicates: " << noDupes << endl;
    cout << endl;


    //sortArray() TEST
    printArray(smallArr, smallNum);
    cout << endl;

    sortArray(smallArr, smallNum);

    printArray(smallArr, smallNum);
    cout << endl;

    return 0;
}