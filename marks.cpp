// Copyright (c) 2019 Joseph Palermo All rights reserved.
//
// Created by: Joseph Palermo
// Created on: December 2019
// This program calculates the average of marks inputted by the user

#include <iostream>
#include <list>

float calculate(std::list<int> listOfMarks) {
    // This function calculates the average of the user's marks

    // Variables
    float markAverage = 0;
    int averageDivider = 0;

    // Process
    for (int counter : listOfMarks) {
        markAverage = markAverage + counter;
        averageDivider += 1;
    }

    markAverage = markAverage/averageDivider;

    // Output
    return markAverage;
}

int main() {
    // This function outputs the average of marks inputted by the user

    // Variables and lists
    std::list<int> markList;
    int mark;
    float average;

    // Input
    std::cout << "Enter all your marks here. When you are done, enter -1."
              << std::endl;

    std::cout << "Enter your mark:" << std::endl;
    std::cin >> mark;
    markList.push_back(mark);
    while (mark != -1) {
        std::cout << "Enter your mark:" << std::endl;
        std::cin >> mark;
        markList.push_back(mark);
    }

    // Process
    markList.pop_back();
    average = calculate(markList);

    // Output
    std::cout << "" << std::endl;
    std::cout << "Your average is " << average << "%" <<std::endl;
}
