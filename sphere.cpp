// Copyright (c) 2022 Hunter Connolly All rights reserved
//
// Created by: Hunter Connolly
// March 30, 2022
// This program calculates the surface area and volume of a sphere

#include <iostream>
#include <cmath>


// declare variables
float radius, surfaceArea, volume, units;

int main() {
    // input
    std::cout << "Today we will calculate the surface area and";
    std::cout << " volume of a sphere\n";
    std::cout << "\n";
    std::cout << "What units are you using? (mm, cm, etc.): ";
    std::cin >> units;
    std::cout << "What is the radius of your sphere? (" << units << "): ";
    std::cin >> radius;

    // process
    surfaceArea = 4 * M_PI * pow(radius, 2);
    volume = 4/3 * M_PI * pow(radius, 3);

    // output
    std::cout << "\n";
    std::cout << std::endl;
    std::cout << "The Surface Area of the sphere is: " << surfaceArea << units << "^2\n";
    std::cout << "The volume is: " << volume << units << "^3\n";
}