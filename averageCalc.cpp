// Copyright (c) 2025 Gustav I
// Created By: Gustav I
// Date: April 22, 2025
// This program calculates the average mark with arrays

#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
#include <iostream>

//  Main function
int main() {
    const int MAX_ARRAY_SIZE = 10;
    const int MIN_NUM = 1;
    const int MAX_NUM = 100;

    int arrayOfInt[MAX_ARRAY_SIZE];

    // Seed the random number generator
    std::srand(std::time(0));

    std::cout << "=== Average Calculator ===" << std::endl;
    std::cout << "Generating random numbers...\n"
              << std::endl;

    // Generate and store random numbers
    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        int num = (std::rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;
        arrayOfInt[i] = num;
        std::cout << num << " added to the list!" << std::endl;
    }

    std::cout << "\nAll numbers added!" << std::endl;
    std::cout << "List of numbers: ";
    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        std::cout << arrayOfInt[i];
        if (i < MAX_ARRAY_SIZE - 1) std::cout << ", ";
    }
    std::cout << std::endl;

    // Calculate the total using a loop
    int total = 0;
    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        total += arrayOfInt[i];
    }

    // Calculate average (as float for precision)
    float average = static_cast<float>(total) / MAX_ARRAY_SIZE;
    std::cout << "\nAverage: " << average << std::endl;

    return 0;
}
