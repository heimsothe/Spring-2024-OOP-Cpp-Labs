#include <string>
#include <iostream>
#include <cmath>
#include <array>
#include <random>
#include <cstddef>
#include <ctime>
#include <iomanip>

int getInput(array<float, MAX_SIZE>&);

void randInput(array<float, MAX_SIZE>&, int&);

float average(array<float, MAX_SIZE>&, int&);

void maxAndMin(array<float, MAX_SIZE>&, int&, float& max, float& min);

float standardDev(array<float, MAX_SIZE>&, int&);

void display(array<float, MAX_SIZE>&, int&);