// Copyright (c) Crestel Ong All rights reserved
//
// Created by: Crestel
// Created on: Sep 2021
// This program sees if you can guess the number its thinking

#include <iostream>

int main() {
    // this function tells the user if the interger they input is + , - or 0

    // variable
    int userNumber;

    // input
    std::cout << "Enter an integer: ";
    std::cin >> userNumber;

    // process and output
    if (userNumber < 0) {
        std:: cout << userNumber << " is a negative number." << std::fixed
        << std::endl;
    } else if (userNumber > 0) {
        std::cout << userNumber << " is a positive number." << std::fixed
        << std::endl;
    } else if (userNumber == 0) {
        std::cout << "0 is just zero!" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
