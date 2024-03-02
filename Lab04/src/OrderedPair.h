/********************************************************
Name      :  Elijah Heimsoth
Class     :  CSCI 2312 Section H01
PA#       :  PA4 Classes and Functions
Due Date  :  03/01/2024
*********************************************************
*********************************************************
* Summary: This file includes the prototyping for the
* Ordered Pair Class implemented in OrderedPair.cpp).

* The class works with x and y coordinates with methods
* to manipulate them in different ways

* Created: 02/29/2024
********************************************************/

/* Function Descriptions
    //CONSTRUCTORS
    OrderedPair();
    OrderedPair(double anX, double anY);

    //GETTERS
    double getX();
    // receives nothing
    // returns x value as a double

    double getY();
    // receives nothing
    // returns y value as a double

    //SETTERS
    void setX(double theX);
    // sets x value
    // receives a double representing x
    // returns nothing

    void setY(double theY);
    // sets y value
    // receives a double representing y
    // returns nothing

    void setPair(double& theX, double& theY);
    // sets x and y value
    // receives 2 doubles representing x and y
    // returns nothing

    double addPair();
    // adds the x and y value of a single Ordered Pair
    // receives nothing
    // returns sum as a double

    void addPair(OrderedPair& pair1, OrderedPair& pair2);
    // adds two Ordered Pairs together (x1+x2), (y1+y2)
    // receives 2 ordered pair objects
    // returns nothing

    double subtractPair();
    // subtracts the y value from the x value of a single Ordered Pair
    // receives nothing
    // returns difference as a double

    void subtractPair(OrderedPair& pair1, OrderedPair& pair2);
    // subtracts two Ordered Pairs from each other (x1-x2), (y1-y2)
    // receives 2 ordered pair objects
    // returns nothing

    double multiplyPair();
    // multiplies the x and y value of a single Ordered Pair
    // receives nothing
    // returns product as a double

    void multiplyPair(OrderedPair& pair1, OrderedPair& pair2);
    // multiplies two Ordered Pairs together (x1*x2), (y1*y2)
    // receives 2 ordered pair objects
    // returns nothing

    double dividePair();
    // divides the x value by the y value of a single Ordered Pair
    // checks for divide by 0 case and prints error if so
    // receives nothing
    // returns quotient as a double

    void dividePair(OrderedPair& pair1, OrderedPair& pair2);
    // divides two Ordered Pairs by each other (x1/x2), (y1/y2)
    // checks for divide by 0 case and prints error if so
    // receives 2 ordered pair objects
    // returns nothing

    double powerPair();
    // performs power operation of x^y of a single Ordered Pair
    // receives nothing
    // returns result as a double

    void displayPair();
    // displays an Ordered Pair in formatted view
    // receives nothing
    // returns nothing
*/

#ifndef ORDEREDPAIR_H
#define ORDEREDPAIR_H

#include <string>
#include <iostream>


class OrderedPair{
    private:
        double xVal = 0;
        double yVal = 0;

    public:
        OrderedPair();
        OrderedPair(double anX, double anY);

        //GETTERS
        double getX();
        double getY();

        //SETTERS
        void setX(double theX);
        void setY(double theY);

        void setPair(double& theX, double& theY);

        double addPair();
        void addPair(OrderedPair& pair1, OrderedPair& pair2);

        double subtractPair();
        void subtractPair(OrderedPair& pair1, OrderedPair& pair2);

        double multiplyPair();
        void multiplyPair(OrderedPair& pair1, OrderedPair& pair2);

        double dividePair();
        void dividePair(OrderedPair& pair1, OrderedPair& pair2);

        double powerPair();

        void displayPair();

};

#endif