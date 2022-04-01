// Copyright (c) 2022 Hunter Connolly All rights reserved
//
// Created by: Hunter Connolly
// March 30, 2022
// This program calculates the surface area and volume of a sphere

#include <iostream>
#include <cmath>
#include <string>


// declare variables
float radius, surfaceArea, volume;



int main() {
    // declare string variable in the function
    std::string units;
    // get the radius and units to calculate for the surface area and volume
    std::cout << "Today we will calculate the surface area and";
    std::cout << " volume of a sphere\n";
    std::cout << "\n";
    std::cout << "What units are you using? (mm, cm, etc.): ";
    std::cin >> units;
    std::cout << "What is the radius of your sphere? (" << units << "): ";
    std::cin >> radius;

    // calculate the surface area and volume of the sphere
    surfaceArea = 4 * M_PI * pow(radius, 2);
    volume =  M_PI * pow(radius, 3) * 4/3;

    // display the surface area and volume of the sphere
    std::cout << "\n";
    std::cout << std::endl;
    std::cout << "The Surface Area of the sphere is: ";
    std::cout << surfaceArea << units << "^2\n";
    std::cout << "The volume is: " << volume << units << "^3\n";
}
