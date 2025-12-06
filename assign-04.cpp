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

        if (std::cin >> num) {
        std::runtime_error("Invalid input! Please enter a valid integer.");
        }

        if (num <= 0) {
        std::cout << "Please enter a number greater than zero." << std::endl;
        } else {
            std::cout << "Factors of " << num << " are:" << std::endl;

            int i = 1;
            while (i <= num) {
                if (num % i == 0) {
                    std::cout << i << std::endl;
                }
                i++;
            }
        }
    } catch (const std::runtime_error& e) {
        // Handles invalid input
        std::cout << e.what() << std::endl;
    } catch (...) {
        // Catches any other unexpected exceptions
        std::cout << "An unexpected error occurred." << std::endl;
    }
}
