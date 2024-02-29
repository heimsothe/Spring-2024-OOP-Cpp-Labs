#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
#include <string>
    using std::string;
    using std::to_string;
#include <cmath>
#include <array>
#include <random>
#include <cstddef>
#include <ctime>
#include <iomanip>

#include "OrderedPair.h"

OrderedPair::OrderedPair() {
}

OrderedPair::OrderedPair(double anX, double anY) {
    setX(anX);
    setY(anY);
    //xVal = anX;
    //yVal = anY;
}

//GETTERS

double OrderedPair::getX(){
    return xVal;
}

double OrderedPair::getY(){
    return yVal;
}

//SETTERS

void OrderedPair::setX(double theX){
    xVal = theX;
}

void OrderedPair::setY(double theY){
    yVal = theY;
}

void OrderedPair::setPair(double& theX, double& theY){
    xVal = theX;
    yVal = theY;
}

//ELEMENT AND PAIR-WISE OPERATIONS

double OrderedPair::addPair(){
    double sum = xVal + yVal;
    return sum;
}

void OrderedPair::addPair(OrderedPair& pair1, OrderedPair& pair2){
    double xOne = pair1.getX();
    double xTwo = pair2.getX();
    double xSum = xOne + xTwo;
    xVal = xSum;

    double yOne = pair1.getY();
    double yTwo = pair2.getY();
    double ySum = yOne + yTwo;
    yVal = ySum;
}

double OrderedPair::subtractPair(){
    double diff = xVal - yVal;
    return diff;
}

void OrderedPair::subtractPair(OrderedPair& pair1, OrderedPair& pair2){
    double xOne = pair1.getX();
    double xTwo = pair2.getX();
    double xDiff = xOne - xTwo;
    xVal = xDiff;

    double yOne = pair1.getY();
    double yTwo = pair2.getY();
    double yDiff = yOne - yTwo;
    yVal = yDiff;
}

double OrderedPair::multiplyPair(){
    double product = xVal * yVal;
    return product;
}

void OrderedPair::multiplyPair(OrderedPair& pair1, OrderedPair& pair2){
    double xOne = pair1.getX();
    double xTwo = pair2.getX();
    double xProd = xOne * xTwo;
    xVal = xProd;

    double yOne = pair1.getY();
    double yTwo = pair2.getY();
    double yProd = yOne * yTwo;
    yVal = yProd;
}

double OrderedPair::dividePair(){
    if(yVal == 0){
        cout << "yVal==0" << endl;
        return 0;
    }
    else{
        double quotient = xVal/yVal;
        return quotient;
    }
}

void OrderedPair::dividePair(OrderedPair& pair1, OrderedPair& pair2){
    double xOne = pair1.getX();
    double xTwo = pair2.getX();

    if(xTwo == 0){
        cout << "DIVIDE BY ZERO" << endl;
    }
    else{
        double xQuo = xOne/xTwo;
        xVal = xQuo;
    }

    double yOne = pair1.getY();
    double yTwo = pair2.getY();

    if(yTwo == 0){
        cout << "DIVIDE BY ZERO" << endl;
    }
    else{
        double yQuo = yOne/yTwo;
        yVal = yQuo;
    }
}

//OTHER FUNCTIONS
void OrderedPair::displayPair(){
    string xStr = to_string(xVal);
    string yStr = to_string(yVal);

    cout << "(" << xStr << ", " << yStr << ")" << endl;
}