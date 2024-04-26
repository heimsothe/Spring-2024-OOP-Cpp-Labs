/*
file: Time.h
date: 04/25/2024
name: Elijah Heimsoth
description: This file contains the declaration of the Time class.
The file is largely taken from Figure 9.1 of the textbook.

FUNCTIONS:
   void setTime(int, int, int); // set hour, minute and second
      receives: 3 integers
      returns: void
      description: sets the hour, minute, and second of the Time object

   std::string toUniversalString() const; // 24-hour time format string
      receives: nothing
      returns: string
      description: returns the time in 24-hour format

   std::string toStandardString() const; // 12-hour time format string
      receives: nothing
      returns: string
      description: returns the time in 12-hour format

   // ADDED FUNCTIONS
   void load(const std::string& s);
      receives: string
      returns: void
      description: loads the time from a string in the format HH:MM:SS

   friend std::ostream& operator<<(std::ostream& out, const Time& t);
      receives: ostream, Time
      returns: ostream
      description: overloads the << operator to output the time in 24-hour format

   // END OF ADDED FUNCTIONS
*/

// Fig. 9.1: Time.h
// Time class definition.              
// Member functions are defined in Time.cpp
#include <string>
#include <iostream>

// prevent multiple inclusions of header
#ifndef TIME_H
#define TIME_H

// Time class definition
class Time {
public:
   void setTime(int, int, int); // set hour, minute and second
   std::string toUniversalString() const; // 24-hour time format string
   std::string toStandardString() const; // 12-hour time format string

   // ADDED FUNCTIONS
   void load(const std::string& s);
   friend std::ostream& operator<<(std::ostream& out, const Time& t);
   // END OF ADDED FUNCTIONS

private:
   unsigned int hour = 0; // 0 - 23 (24-hour clock format)
   unsigned int minute = 0; // 0 - 59
   unsigned int second = 0; // 0 - 59
};

#endif

/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
 