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

#include "OrderedPair.h"
#include "functions.h"

int main(){
    /*
    //ORDERED PAIR TESTING
    //Constructors and Setters
    OrderedPair defaultPair;
    OrderedPair pair1(1, 2); //tests setX and setY inherently

    //displayPair and Getters
    cout << "Default Pair: ";
    defaultPair.displayPair();
    cout << "Pair 1: " << "(" << pair1.getX() << ", " << pair1.getY() << ")" << endl;


    //setPair
    double newX = 3;
    double newY = 4;

    cout << "setting default pair to (3,4) --> now called pair2" << endl;
    defaultPair.setPair(newX,newY);

    OrderedPair pair2 = defaultPair;
    cout << "Pair 2: ";
    pair2.displayPair();

    //addPair test
    cout << "1 + 2 = " << pair1.addPair() << endl;
    OrderedPair sumPair;
    sumPair.addPair(pair1, pair2);
    cout << "sumPair = pair1X + pair2X, pair1Y + pair2Y: ";
    sumPair.displayPair();

    //subtractPair test
    cout << "1 - 2 = " << pair1.subtractPair() << endl;
    OrderedPair diffPair;
    diffPair.subtractPair(pair1, pair2);
    cout << "diffPair = pair1X - pair2X, pair1Y - pair2Y: ";
    diffPair.displayPair();

    //multiplyPair test
    cout << "1 * 2 = " << pair1.multiplyPair() << endl;
    OrderedPair prodPair;
    prodPair.multiplyPair(pair1, pair2);
    cout << "prodPair = pair1X * pair2X, pair1Y * pair2Y: ";
    prodPair.displayPair();

    //dividePair test
    cout << "1 / 2 = " << pair1.dividePair() << endl;
    OrderedPair quoPair;
    quoPair.dividePair(pair1, pair2);
    cout << "quoPair = pair1X / pair2X, pair1Y / pair2Y: ";
    quoPair.displayPair();

    //powerPair test
    cout << "3^4 = " << pair2.powerPair() << endl;
    */

    //FUNCTIONS TESTING

    //getInput
    array<float, MAX_SIZE> userInpArr;
    cout << "User Input Array @ Index 0: " << userInpArr[0] << endl;
    int userArrLen = getInput(userInpArr);
    cout << "User Input Array @ Index 0: " << userInpArr[0] << endl;
    cout << "User Input Array length: " << userArrLen << endl;


    //randInput
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

    /*
    //average

    float avg = average(avgArray, 5);
    cout << "average of avgArray is: " << avg << endl;
    */


    return 0;
}