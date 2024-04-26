/*
file main.cpp
date 04/25/2024
name: Elijah Heimsoth
description: This program reads grades from a file and
computes the sum, average, and a histogram of the grades.
It then writes the results to a file.
*/
#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
#include <iomanip>
    using std::setw;
#include <array>

#include <vector>
    using std::vector;
#include <string>
    using std::string;
#include <fstream>
    using std::ifstream;
    using std::ofstream;

int main(){
    //Initalizing Variables
    /* ORIGINAL CODE: ARRAYS
    const unsigned int MAX_GRADES{5};               // Number of grades to read
    std::array<unsigned int, MAX_GRADES> grades;    // Stores the user grades
    std::array<unsigned int, 10> histogram{0};      // Store the histogram.
    */

    // MODIFIED CODE: VECTORS
    vector<unsigned int> grades;

    // INPUT FILE
    string inputFileName;
    cout << "Enter the input file name: ";
    cin >> inputFileName;
    
    // Read and store grades
    /* ORIGINAL CODE: 
    for(size_t index{0}; index < MAX_GRADES; index++)
    {
        cout << "Enter Grade [" << index << "]: ";
        cin >> grades[index];
    }
    */

    // MODIFIED CODE:
    ifstream inputFile(inputFileName);
    string line;
    while(getline(inputFile, line)){
        grades.push_back(stoi(line));
    }
    inputFile.close();

    // Compute Sum and Average
    /* ORIGINAL CODE:
    int sum{0};
    float avg{0.0};
    for(size_t index{0}; index < MAX_GRADES; index++)
    {
        cout << grades[index] << " | ";
        sum += grades[index];
    }
    cout << endl;
    avg = static_cast<float>(sum) / MAX_GRADES;
    cout << "The grade sum is :" << sum <<endl;
    cout << "The grade avg is :" << avg <<endl;
    */
   
   // MODIFIED CODE:
   string outputFileName = inputFileName + ".RPT";
   ofstream outputFile(outputFileName);
   for (unsigned int grade : grades){
       outputFile << grade << " | ";
   }
   outputFile << endl;

   unsigned int sum = 0;
   float avg = 0.0;
   for (unsigned int grade : grades){
        sum += grade;
   }
   avg = static_cast<float>(sum) / grades.size();
   
   outputFile << "The grade sum is: " << sum << endl;
   outputFile << "The grade avg is: " << avg << endl;
   
   // Compute histogram histogram
   /* ORIGINAL CODE:
   for (int index{0}; index < MAX_GRADES; index++){
        unsigned int gradeBucket{0};

        if (grades[index] >= 100)
            gradeBucket = 9; //last percentile
        else
            gradeBucket = grades[index] / 10;  // 95 -> 9, 55 -> 5        

        histogram[gradeBucket]++; 
    }
    */
   
   // MODIFIED CODE:
   vector<unsigned int> histogram(10, 0);
   for (unsigned int grade : grades){
        unsigned int gradeBucket = 0;
        if (grade >= 100){
            gradeBucket = 9;
        } else {
            gradeBucket = grade / 10;
        }
        histogram[gradeBucket]++;            
    }
         
   //Display Histogram
   /* ORIGINAL CODE:
    for (int bucket{0}; bucket < 10; bucket++)
    {
        cout << setw(2) << bucket << ":";
        for(int i{0}; i < histogram[bucket]; i++)
            cout << "|";
        cout << endl;
    }
    */
   // MODIFIED CODE:
   for (unsigned int bucket = 0; bucket < 10; bucket++){
       outputFile << setw(2) << bucket << ":";
       for (unsigned int i = 0; i < histogram[bucket]; i++){
           outputFile << "|";
       }
       outputFile << endl;
   }

   outputFile.close();

   return 0;

}