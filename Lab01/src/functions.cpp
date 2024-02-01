//TODO - Add the appropriate file header here

// TODO - Add any needed #include statements here
#include <iostream>
#include <string>

// TODO - Implemented the following functions. Refer to the assignment README as needed
//takes in num to prompt user for specific y variable at current index
int getInput(int num) {
/*********************YOUR CODE BELOW THIS LINE***********************/
    //initializes input value
    int input = 0;
    //prompts user for input and stores to var input
    std::cout << "Enter a y coordinate " << num << ": ";
    std::cin >> input;
    //returns input
    return input;
/*********************YOUR CODE ABOVE THIS LINE***********************/
}

float calculateLakeArea() {
/*********************YOUR CODE BELOW THIS LINE***********************/
    /* Area Formula:
    (200/3) * [ f(0) + 4f(200) + 2f(400) + 4f(600) + 2f(800) + 4f(1000) + 2f(1200) + 4f(1400) + f(1600) ]
    */

   //Initializes sum of y values
   float yVals = 0;

   //Loops through to gather all 9 y coordinates
   for (int ndx = 0; ndx <= 8; ndx++){
        //if 1st or Last coordinate use coefficient 1
        if (ndx == 0 || ndx == 8){
            yVals += getInput(ndx);
        }
        //if ndx is odd use coefficient 4
        else if (ndx % 2 != 0){
            yVals += (4 * getInput(ndx));
        }
        //if ndx is even use coefficient 2
        else {
            yVals += (2 * getInput(ndx));
        }
    }
    //calculates the final lake area using above formula
    float lakeArea = (float)200/3 * yVals;

    //returns lakeArea
    return lakeArea;
/*********************YOUR CODE ABOVE THIS LINE***********************/
}


float calculateLakeVolume(float areaOfLake) {
    /*********************YOUR CODE BELOW THIS LINE***********************/
    float lakeVolume = areaOfLake * 20;
    return lakeVolume;
    /*********************YOUR CODE ABOVE THIS LINE***********************/
}

int calculateFishStock(float volumeOfLake) {
    /*********************YOUR CODE BELOW THIS LINE***********************/

    /*********************YOUR CODE ABOVE THIS LINE***********************/
}

int calculateMaxLicenses(int fishStock) {
    /*********************YOUR CODE BELOW THIS LINE***********************/

    /*********************YOUR CODE ABOVE THIS LINE***********************/
}