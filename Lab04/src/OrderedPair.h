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