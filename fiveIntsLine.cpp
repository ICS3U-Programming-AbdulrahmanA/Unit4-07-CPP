// Copyright (c) 2025 Abdul All rights reserved.
// Created By: Abdul
// Date: November 28th, 2025
// year every 5 years from 1000 to 2000

#include <iostream>

int main() {
    // display years from 1000 to 2000, five per line
    for (int year = 1000; year <= 2000; year++) {
        std::cout << year << " ";
        // print a new line after every five years
        if (year % 5 == 0 && year != 1000) {
            std::cout << std::endl;
        }
    }
}
