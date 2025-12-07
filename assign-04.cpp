// Copyright (c) 2025 Christopher El-Murr All rights reserved
// Created by Christopher El-Murr
// Date:December 05 2025
// This program uses a for loop calculate the
// factors of the number entered by the user
#include <iostream>
#include <stdexcept>  // for std::runtime_error

int main() {
    try {
        int num;
        std::cout << "Enter a positive integer: ";

        // Proper input validation
        if (!(std::cin >> num)) {
    std::cout << "Invalid input! Please enter a valid integer." << std::endl;
        }

        if (num <= 0) {
        std::cout << "Please enter a number greater than zero." << std::endl;
        } else {
            std::cout << "Factors of " << num << " are:" << std::endl;

            // Use a for loop
            for (int i = 1; i <= num; ++i) {
                if (num % i == 0) {
                    std::cout << i << std::endl;
                }
            }
        }
    } catch (const std::runtime_error& e) {
        std::cout << "An error occurred: " << std::endl;
    }
}
