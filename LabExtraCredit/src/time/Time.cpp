/*
file: Time.cpp
date: 04/25/2024
name: Elijah Heimsoth
description: This file contains the implementation of the Time class.
The file is largely taken from Figure 9.2 of the textbook.

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

// Fig. 9.2: Time.cpp
// Time class member-function definitions.
#include <iomanip> // for setw and setfill stream manipulators
   using std::setfill;
   using std::setw;
#include <stdexcept> // for invalid_argument exception class 
   using std::invalid_argument;
#include <sstream> // for ostringstream class
   using std::ostringstream;
   using std::istringstream;
#include <string>
   using std::string;
#include <iostream>
   using std::cout;
   using std::endl;
   using std::ostream;


#include "Time.h" // include definition of class Time from Time.h



// set new Time value using universal time
void Time::setTime(int h, int m, int s) {
   // validate hour, minute and second
   if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)) {
      hour = h;
      minute = m;
      second = s;
   }
   else {
      throw invalid_argument("hour, minute and/or second was out of range");
   }
}

// return Time as a string in universal-time format (HH:MM:SS)
string Time::toUniversalString() const {
   ostringstream output;
   output << setfill('0') << setw(2) << hour << ":"
      << setw(2) << minute << ":" << setw(2) << second;
   return output.str(); // returns the formatted string
}

// return Time as string in standard-time format (HH:MM:SS AM or PM)
string Time::toStandardString() const {
   ostringstream output;
   output << setfill('0') << setw(2) << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
      << setw(2) << minute << ":"
      << setw(2) << second
      << (hour < 12 ? " AM" : " PM");
   return output.str(); // returns the formatted string
}
 
void Time::load(const string& s) {
   int h, m, se;
   char c;
   istringstream is(s);
   is >> h >> c >> m >> c >> se;
   setTime(h, m, se);
}

ostream& operator<<(ostream& out, const Time& t) {
   out << t.toUniversalString();
   return out;
}



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
 