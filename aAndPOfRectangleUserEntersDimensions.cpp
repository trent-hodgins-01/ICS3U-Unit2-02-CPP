// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 09/14/21
// This program calculates the area and perimeter of a rectangle
// The user enters in the dimensions

#include <iostream>

int main() {
    // This function calculates area and perimeter
    int length;
    int width;
    int area;
    int perimeter;

    // Input
    std::cout << "Enter length of the rectangle (mm): ";
    std::cin >> length;
    std::cout << "Enter width of the rectangle (mm): ";
    std::cin >> width;

    // process
    area = length*width;
    perimeter = 2*(length+width);

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << " mm²." << std::endl;
    std::cout << "Perimeter is " << perimeter << " mm." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
