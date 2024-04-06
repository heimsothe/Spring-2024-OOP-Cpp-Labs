/********************************************************
Name      :  Elijah Heimsoth
Class     :  CSCI 2312 Section H01
PA#       :  PA6
Due Date  :  04/05/2024
*********************************************************
*********************************************************
* Summary: This file contains the test program for
  the Person, Pet, Address, and Date classes.

* Created: 04/04/2024
********************************************************/
#include "Person.h"
#include "Pet.h"
#include "Address.h"
#include "Date.h"
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    Person myPerson;
    //Pet myPet;
    int choice;

    while (choice != 5) {
        std::cout << "1. Enter a person\n";
        std::cout << "2. Enter a new pet\n";
        std::cout << "3. Display person\n";
        std::cout << "4. Delete a pet\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore();


        switch (choice) {
            case 1: {
                std::cin >> myPerson;
                break;
            }
            case 2: {
                //myPerson.addPet();
                try {
                    myPerson.addPet();
                }
                catch (const char* msg) {
                    std::cerr << msg << std::endl;
                }
                break;
            }
            case 3: {
                std::cout << myPerson;
                break;
            }
            case 4: {
                //myPerson.deletePet();
                try {
                    myPerson.deletePet();
                }
                catch (const char* msg) {
                    std::cerr << msg << std::endl;
                }
                break;
            }
            case 5: {
                std::cout << "Exiting\n";
                break;
            }
            default: {
                std::cout << "Invalid choice. Please try again.\n";
                break;
            }
        }
    }

    return 0;
}