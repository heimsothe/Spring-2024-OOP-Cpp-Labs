/*
file: main.cpp
date: 04/25/2024
name: Elijah Heimsoth
description: This program reads times from a file and writes the standard and 24 hour time to a file.
*/

#include "Time.h"
#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
    using std::ostream;
#include <fstream>
    using std::ifstream;
    using std::ofstream;
#include <sstream>
    using std::istringstream;
    using std::ostringstream;
#include <vector>
    using std::vector;
#include <string>
    using std::string;
#include <iomanip>
    using std::setw;

int main() {
    vector<Time*> times;
    string inputFileName;
    string outputFileName;

    // Prompt for input file
    cout << "Enter the input file name: ";
    cin >> inputFileName;

    // Read the file
    ifstream inputFile(inputFileName);
    string line;

    // Operate on each line
    while(getline(inputFile, line)) {
        Time* t = new Time();
        t->load(line);
        times.push_back(t);
    }

    // Close the input file
    inputFile.close();

    // Prompt for output file
    cout << "Enter the output file name: ";
    cin >> outputFileName;

    // Write to the output file
    ofstream outputFile(outputFileName);
    for (Time* t : times) {
        outputFile << t->toStandardString() << "\t" << *t << endl;
    }

    // Close the output file
    outputFile.close();

    // Free the memory
    for (Time* t : times) {
        delete t;
    }

    return 0;
}

