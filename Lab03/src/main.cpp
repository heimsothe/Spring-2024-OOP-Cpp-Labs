#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
#include <string>
    using std::string;
#include <iomanip>
    using std::setw;
    using std::setfill;
    using std::left;
    using std::right;
#include <ios>
#include <sstream>
#include "Student.h"

int main(){
    //Default WORKS
    Student Default;
    //Display WORKS
    Default.displayStudent();

    std::cout << "\n" << std::endl;

    //Setters WORK
    Default.setSID(123);
    Default.setFName("First Name");
    Default.setLName("Last Name");
    Default.setAddress("123 street");
    Default.setPhone(1234567);

    std::cout << "Used setters to add data to Default:" << std::endl;
    Default.displayStudent();

    std::cout << "\n" << std::endl;


    Student Me(4905, "Eli", "Heimsoth", "1935 N Logan St", 3193209, "90 85 75", 3);
    std::cout << "Created Student Me:" << std::endl;
    Me.displayStudent();
    //getCount WORK, getGrade WORK
    std::cout << "grade count for Me is: " << Me.getCount() << std::endl;
    std::cout << "grade location 1: " << Me.getGrade(0) << std::endl;
    std::cout << "grade location 2: " << Me.getGrade(1) << std::endl;
    std::cout << "grade location 2: " << Me.getGrade(2) << std::endl;

    std::cout << "\n" << std::endl;

    std::cout << "Code will now add a new grade of 70 to Me" << std::endl;
    Me.addGrade(70);

    //Me.setCount();
    std::cout << "grade count for Me is: " << Me.getCount() << std::endl;
    std::cout << "grade location 1: " << Me.getGrade(0) << std::endl;
    std::cout << "grade location 2: " << Me.getGrade(1) << std::endl;
    std::cout << "grade location 3: " << Me.getGrade(2) << std::endl;
    std::cout << "grade location 3: " << Me.getGrade(3) << std::endl;

    std::cout << "\n" << std::endl;

    Me.listGrades();

    return 0;
};