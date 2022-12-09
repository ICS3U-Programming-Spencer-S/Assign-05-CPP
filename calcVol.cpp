// Copyright (c) 2022 Spencer Scarlett All rights reserved.
// .
// Created by: Spencer Scarlett
// Created on: Dec 8, 2022
// A program the calculates the volume of a sphere.
#include <cmath>
#include <iostream>

// First function for volume
int calcSphereVol(float radius) {
    float volume;
    volume = (4* M_PI * pow(radius, 3))/ 3;
    return volume;
}
// Second function for diameter
int calcSphereDia(float radius) {
    float diameter;
    diameter = 2 * radius;
    return diameter;
}

int main() {
    // declaring
    float userRadi;
    float userVolume;
    float userDiameter;
    int extra;

    // try catch for inputs and denys invalid ones
    try {
        std::cout <<
        "Enter a positive radius of a sphere to calculate (in cms): ";
        std::cin >> userRadi;
    } catch (std::invalid_argument) {
        std::cout <<
        "Radius must be a positive number. Enter any key to try again: ";
    }
    // Checks if user input is less or equal to 0
    if (userRadi <= 0) {
        std::cout << "The radius must be a positive number only!\n";
    } else {
        // Calls function
        userVolume = calcSphereVol(userRadi);
        // Displays function values
        std::cout << "The volume of a radius of " << userRadi << " cm is\n";
        std::cout << userVolume << "cm^3\n";
    }
    // Try catch for if they wish to continue
    // and receive the diameter
    try {
        std::cout <<
        "Would you also like the diameter of "
        << userRadi << "cm? (1 = yes 0 = no): ";
        std::cin >> extra;
        // if input is not 1 or 0 ends program
    } catch (std::invalid_argument) {
        std::cout << "Invalid input for extra, goodbye!";
    }
    // if 1 display diameter
    if (extra == 1) {
        // Call for program
        userDiameter = calcSphereDia(userRadi);
        // displays output message
        std::cout << "The diameter of a radius of " << userRadi << " cm is\n";
        std::cout << userDiameter << "cm^3\n";
        // if output is 0
    } else {
        std::cout << "Goodbye!";
    }
}
