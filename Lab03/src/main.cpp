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
    //Display WORK
    Default.displayStudent();
    //Setters WORK
    Default.setSID(123);
    Default.setFName("First Name");
    Default.setLName("Last Name");
    Default.setAddress("123 street");
    Default.setPhone(1234567);

    std::cout << "Default Student: " << std::endl;
    Default.displayStudent();

    //Me WORKS
    Student Me(4905, "Eli", "Heimsoth", "1935 N Logan St", 3193209, "90 85 75", 3);
    Me.displayStudent();
    //Me.setCount();
    //getCount WORK, getGrade WORK
    std::cout << "count for Me is: " << Me.getCount() << std::endl;
    std::cout << "grade location 1: " << Me.getGrade(0) << std::endl;
    std::cout << "grade location 2: " << Me.getGrade(1) << std::endl;
    std::cout << "grade location 3: " << Me.getGrade(2) << std::endl;

    Me.addGrade(70);
    //Me.setCount();
    std::cout << "count for Me is: " << Me.getCount() << std::endl;
    std::cout << "grade location 1: " << Me.getGrade(0) << std::endl;
    std::cout << "grade location 2: " << Me.getGrade(1) << std::endl;
    std::cout << "grade location 3: " << Me.getGrade(2) << std::endl;
    std::cout << "grade location 3: " << Me.getGrade(3) << std::endl;

    Me.setStudent(2646, "Elijah", "Heimsoth", "1935 N Logan St", 3193209, "90 85 75 69 50");
    //Me.setCount();
    Me.displayStudent();
    std::cout << "count for Me is: " << Me.getCount() << std::endl;
    std::cout << "grade location 1: " << Me.getGrade(0) << std::endl;
    std::cout << "grade location 2: " << Me.getGrade(1) << std::endl;
    std::cout << "grade location 3: " << Me.getGrade(2) << std::endl;
    std::cout << "grade location 3: " << Me.getGrade(3) << std::endl;
    std::cout << "grade location 4: " << Me.getGrade(4) << std::endl;

    return 0;
};