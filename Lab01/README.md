<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.0.0-beta3/css/all.min.css">

# Programming Assignment 1

This homework assignment will let you practice with some of the arithmetic functions and control structures you've seen in class. You will also get some exposure to .h header and .cpp implementation files.

## Overview

The objectives of this assignment are as follows:
1. Test your ability to design software to meet desired needs.
2. Test your ability to identify, formulate, and solve computer science and engineering problems.


<div
    style="background-color: #FFFBEB; border-left: 6px solid #F97316; color: #813F0B; padding: 10px; border-radius: 5px; font-family: Arial, sans-serif; font-size: 14px;">
    <i class="fa-solid fa-triangle-exclamation" style="margin-right: 10px;"></i>
    <b style="display: inline; margin-bottom: 8px; font-size: 16px;">Naming Conventions:</b>
    <p><ul>
<li>While implementation details are still up to you, make sure you use the coding style discussed in class regarding functions, name, classes, and indentations unless a specific name is given to you throughout this assignment.</li>
<li>If a specific name for something like a <code>variable</code>, <code>class</code>, or <code>function</code> is given to you, you <em>MUST</em> use it exactly or the autograder won&#39;t be able to find it and the tests will fail.<ul>
<li>Points will <em><em>not</em></em> be given for tests that fail due to incorrect naming.</li>
</ul>
</li>
<li>Variables should be localized with the correct scope, datatype (based on the data needed to be stored), and their names must be pnemonic. I.e., avoid variables like a, b, i, j, k, x, y, z, etc. </li>
<li>Coding style will be reviewed and your assessment grade may be impacted due to that as described in our syllabus.</li>
<li>Remember that homework must be completed <strong>individually</strong> without help (human or AI).</li>
</ul></p>
</div>


## Tasks & TODOs


You are the game warden in your town and are responsible for stocking the local lake
(see Figure 1 below) prior to the opening of the fishing season. The average depth of the lake is
20 feet. Your plan is to stock the lake with 1 fish per 1000 cubic feet, and have
approximately 25% of the original fish population remaining at the end of the season.
What is the maximum number of fishing licenses that can be sold if the average catch is
20 fish per license?

![a graph showing echo lake as a rough bell curve with 9 data points](./figure1.jpg)

*__Hint__*

You will have to compute the volume of the lake, since the criterion for stocking is 1 fish per $1000 ft^3$. Volume can be computed as $Area × Depth$. The area can be computed
using calculus. In particular, use Simpson’s Rule to compute the area. Recall we can
compute the area under a curve using Simpson’s Rule as follows.

$\int_{a}^{b} f(x) \, dx \approx \frac{h}{3} \left[ y_0 + 4y_1 + 2y_2 + 4y_3 + ... + 2y_{n-2} + 4y_{n-1} + y_n \right]$

where $h=(b-a)/n = 200 ft$, $n$ is an even number (8 in our problem), and the $y_i (i=0, 1, …)$
are data elements you will get from the user via keyboard input.

### Functions

This task should be split amongst five functions. Their prototypes are given to you (this won't be the case for future assignments). 

## Grading

Your code will run against unit tests on an Autograder. You can run the tests in a Codespace or on Linux using the provided `g++` instructions but remember tests must pass on the Autograder to receieve points.

<div
    style="background-color: #ECFDF5; border-left: 6px solid #10B981; color: #064E3B; padding: 16px; border-radius: 5px; font-family: Arial, sans-serif; font-size: 14px;">
    <i class="fa-solid fa-lightbulb" style="margin-right: 10px;"></i>
    <b style="display: inline; margin-bottom: 8px; font-size: 16px;">Tip!</b> 
    <p>These functions do not depend on each for their test cases to run. This means if you get stuck on one, you can still get the points for implementing the others. </p>
    <p><b>HINT:</b> You will likely want to use <code>getInput()</code> as part of your implementation for calculateLakeArea()</p>
</div>

### Compiling

It is expected that you are able to compile and run your own code without relying solely on other tools. Here is the general format for g++ (you leave out the `[]` characters when actually writing the commands ):

```bash
g++ [relevant setting and flags. These usually start with a '-'] [list of files to link together separated by a space : .cpp, .o, .a etc] -lpthread -o [name of the output file you wish to use]
```

The `g++` build command does use a couple extra settings when compiling with the unit tests. The additional options and what they signify are explained here:

- `-lpthread`: Links the pthread library to the resulting executable. In essence, it ensures that threading functions are available in the resulting binary. The unit tests use multithreading which is why we are including it.


- `[.cpp files, .o files, and .a files]` : Now, list off any .cpp source files, .o object files, and .a static library files that need to be included in the build. For all of these, you must include the relative file path for any files that aren't in your current working directory.
    - You will first list off any `.cpp` files needed by your program to run. In general, if your code uses an `#include "*.h"` statement, you will put the corresponding `.cpp` file here.
    - Then, add the object file for the test(s) you wish to run. Remember you must also include the relative file path if you are in a different working directory from the .o file (for example, `../tests/` if you are in the `src` folder or just `tests/` if you at the root of the repo).
    - Lastly, include the file `gtest_main.a`. This file contains the `main` program needed to launch the unit tests against your code.
        - Remember: A build must include **_exactly one (1)_** main function so you can't include your own main when running the unit tests.

- `-o` : This option lets you specify the name of the file you want `g++` to output the executable code. If a file with that name already exists, *it will be overwritten*. The default output file is `a.out` if you don't include this option.

Here is an example of a build command that could be used for this assignment. In this example, the working directory is `root` or top level of the repository:

```bash
g++ src/functions.cpp tests/gtest_main.a tests/getInput_test.o -lpthread -o getInput_test.exe
```

Modify it as needed to run the tests as you wish. The autograder will also still run on each push to your repo if you prefer to test that way. 

<div
    style="background-color: #FFFBEB; border-left: 6px solid #F97316; color: #813F0B; padding: 16px; border-radius: 5px; font-family: Arial, sans-serif; font-size: 14px;">
    <i class="fa-solid fa-triangle-exclamation" style="margin-right: 10px;"></i>
    <b style="display: inline; margin-bottom: 8px; font-size: 16px;">Caution</b>
    <p>Do <b>not</b> attempt to reverse engineering the unit tests and attempt to force them to pass by hardcoding in reponses to expected values. Attempts to bypass the Autograder are considered academic misconduct and may result in a 0 for the whole assignment.</p>
</div>

## Rubric

Below are the tests the Autograder will run. Remember a test might have multiple criteria needed for it to pass. You must pass all criteria for a given test to receive points for it.

| Test Name        | Description                                                          | Marks |
| ---------------- | -------------------------------------------------------------------- | ----: |
| getInput_test | Checks if `getInput` returns an `int` enetered from the keyboard. |     10 |
| calculateLakeArea_test | Checks if `calculateLakeArea` computes the correct area using Simpson's Rule. |     35 |
| calculateLakeVolume_test | Checks if `calculateLakeVolume` computes the correct volume given an area. |     10 |
| calculateFishStock_test | Checks if `calculateFishStock` determines the correct number of fish to stock given a volume. |     10 |
| calculateMaxLicenses_test | Checks if `calculateMaxLicenses` computes the correct number of licenses to sell to still have 25% of fish left given a stock of fish.|     15 |



<div
    style="background-color: #E5F6FF; border-left: 6px solid #2CA5E0; color: #091E42; padding: 10px; border-radius: 5px; font-family: Arial, sans-serif; font-size: 14px;">
    <i class="fa-solid fa-circle-info"></i>
    <b style="display: inline; margin-bottom: 8px; font-size: 16px;">Style Points</b>
    <p>There will also be another 20 points that are dependent on your code style and following the guidelines shown in the Modules on Canvas.</p>
    <p>This grading will be done manually by the TAs after the deadline.</p>
</div>
