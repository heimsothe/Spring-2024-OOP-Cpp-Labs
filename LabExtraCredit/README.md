<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.0.0-beta3/css/all.min.css">

# Programming Assignment #9 (PA9) - Extra Credit

<!-- [A quick 1-2 sentences talking about the topics and material covered in this assignment] -->

## Overview

<!-- [A high-level summary of what students will be working on in this assignment] -->
In this assignment, we take a look at operator overloading and file handling. 

**This program assignment is optional and will be counted as extra credits.** 
<!-- Some details on naming conventions. Some are essential for the Autograder to properly function. -->
<div
    style="background-color: #FFFBEB; border-left: 6px solid #F97316; color: #813F0B; padding: 10px; border-radius: 5px;">
    <i class="fa-solid fa-triangle-exclamation" style="margin-right: 10px;"></i>
    <b style="display: inline; margin-bottom: 8px; font-size: 16px;">Naming Conventions:</b>
    <p><ul>
<li>While implementation details are still up to you, make sure you use the coding style discussed in class regarding functions, name, classes, and indentations unless a specific name is given to you throughout this assignment.</li>
</ul>
</li>
<li>Variables should be localized with the correct scope, datatype (based on the data needed to be stored), and their names must be pneumonic. I.e., avoid variables like a, b, i, j, k, x, y, z, etc. </li>
<li>Coding style will be reviewed and your assessment grade may be impacted due to that as described in our syllabus.</li>
<li>Remember that homework must be completed <strong>individually</strong> without help (human or AI).</li>
</ul></p>
</div>

<br>

<!-- Restrictions on what libraries are/aren't allowed to be used -->
<div
    style="background-color: #FEF2F2; border-left: 6px solid #EF4444; color: #991B1B; padding: 16px; border-radius: 5px;">
    <i class="fa-solid fa-fire-flame-curved" style="margin-right: 10px;"></i>
    <b style="display: inline; margin-bottom: 8px; font-size: 16px;">Restrictions:</b>
    <p><ul>
<li>Only the libraries discussed in class can be used in homework:<ul>
<li><code>iostream</code></li>
<li><code>string</code></li>
<li><code>cmath</code></li>
<li><code>random</code></li>
<li><code>ctime</code></li>
<li><code>array</code></li>
<li><code>vector</code></li>
<li><code>cstddef</code></li>
<li><code>iomanip</code></li>
<li><code>exception</code></li>
<li><code>cstdlib</code></li>
<li><code>sstream</code></li>
</ul>
</li>
<li>The <code>using namespace</code> statement such as <code>using namespace std;</code> is <strong>not allowed</strong> in this homework. The <code>using</code> keyword is otherwise allowed, e.g., <code>using std::cout;</code></li>
</ul></p>
</div>

## Tasks & TODOs

<!-- Note (Blue) -->
<div
    style="background-color: #E5F6FF; border-left: 6px solid #2CA5E0; color: #091E42; padding: 16px; border-radius: 5px; font-family: Arial, sans-serif; font-size: 14px;">
    <i class="fa-solid fa-circle-info"></i>
    <b style="display: inline; margin-bottom: 8px; font-size: 16px;">Note:</b>
    <p>There are no TODO comments for this assignment as you are creating your own files. You can use the TODOs from prior PAs as a rough guide to the pieces you need. You should also refer to your class notes and textbook for guidance as necessary.</p>
</div>

<br>

## Problem #1: (25 points)

- Implement the Class Time from Figures 9.1 and 9.2 in the book
- The `Time` class:
   - Add to `Time` class a method `void load(const string& s);`
     - The method takes a string (see format) and parses it to load the time object. In other words, the load method will take a string then, split it into substrings, and assign these values to the current Time object
     - **must use `stringstream`**
   - Override the `operator<<` for `Time`, which takes a `ostream` (so it can be printed to the console and saved to a file).
   - friend can be used, but implementation must be provided on `Time.cpp`

**Main program:**
- Has a `vector` of `Time*`
- Prompts an input filename from the user
- Read the file, then:
    - For each line, it creates a `Time` object (ptr)
    - Calls its `load` method and pastes the line as a parameter
    - Save that object to the vector created above
- Then, ask the user for an output filename.
- For each Time object, save to the output file the return of `toStandardString()` of the `Time` class, a tab, and then save the time (use `operator<<`) and a new line.
    - e.g. 20\t5\t5\n (\t represents a tab and \n a new line)

**File Format:**
- Files Format: **The file has one line per time**
    - Input file: `hours minutes seconds` (using space as delimiter) 
        - e.g.: `14 20 3`
    - Output file: `HH:MM:SS PM/AM    hours minutes seconds` (using \t to separate universal time from the time files. Time fields use space as delimiter) 
        - e.g. 02:20:03 PM\t14 20 3

## Problem #2: (25 points)

- Adapt the program from the given code (below) so that  
    - Uses `vector` instead of `array` to work for an unlimited number of numbers.
    - the program will ask the user for the input filename.
    - Then, it reads the numbers from that file. **The file will have one number per line.**
    - Update the code so that all output (except for asking the user for the input file name) needs to be saved from the program to a file that is called the same as the input filename with the extension .RPT
    - For example, if the input filename is numbers.txt, the output filename is numbers.txt.RPT 

**Code**
```cpp
#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
#include <iomanip>
    using std::setw;

#include <array>


int main()
{
    //Initalizing Variables
    const unsigned int MAX_GRADES{5};               // Number of grades to read
    std::array<unsigned int, MAX_GRADES> grades;    // Stores the user grades
    std::array<unsigned int, 10> histogram{0};      // Store the histogram.       
    
    // Read and store grades
    for(size_t index{0}; index < MAX_GRADES; index++)
    {
        cout << "Enter Grade [" << index << "]: ";
        cin >> grades[index];
    }

    // Compute Sum and Average
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

    // Compute histogram histogram
    for (int index{0}; index < MAX_GRADES; index++)
    {
        unsigned int gradeBucket{0};

        if (grades[index] >= 100)
            gradeBucket = 9; //last percentile
        else
            gradeBucket = grades[index] / 10;  // 95 -> 9, 55 -> 5        

        histogram[gradeBucket]++; 
    }
    //Display Histogram
    for (int bucket{0}; bucket < 10; bucket++)
    {
        cout << setw(2) << bucket << ":";
        for(int i{0}; i < histogram[bucket]; i++)
            cout << "|";
        cout << endl;
    }
}
```


## Testing 

There will be no test given for PA9. You should create your input file to test and debug your programs.

### Compiling

Here is an example of a g++ command that can be used to run your program:

```bash
g++ -Wall -Wextra -pthread -lpthread main.cpp Time.cpp -o time.exe
```
Then run your program by:

`./time.exe`

The `g++` build command does use a couple extra settings. The additional options and what they signify are explained here:


- `[.cpp files, .o files, and .a files]` : Now, list off any .cpp source files, .o object files, and .a static library files that need to be included in the build. For all of these, you must include the relative file path for any files that aren't in your current working directory.

- `-lpthread`: Links the pthread library to the resulting executable. In essence, it ensures that threading functions are available in the resulting binary.

- `-o` : This option lets you specify the name of the file you want `g++` to output the executable code. If a file with that name already exists, *it will be overwritten*. The default output file is `a.out` if you don't include this option.

## Rubric & Grading

**Problem 1: 25 points**

**Problem 2: 25 points**
