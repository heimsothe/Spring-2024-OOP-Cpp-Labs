#include <string>
#include <iostream>
#include <cmath>
#include <array>
    using std::array;
#include <random>
#include <cstddef>
#include <ctime>
#include <iomanip>

const size_t MAX_SIZE = 50;

int getInput(array<float, MAX_SIZE>& anArray);

void randInput(array<float, MAX_SIZE>& anArray, int& anInt);

float average(array<float, MAX_SIZE>& anArray, int& anInt);

void maxAndMin(array<float, MAX_SIZE>& anArray, int& anInt, float& max, float& min);

float standardDev(array<float, MAX_SIZE>& anArray, int& anInt);

void display(array<float, MAX_SIZE>& anArray, int& anInt);