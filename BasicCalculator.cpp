// BasicCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "math.h";
#include <iostream>
#include <string>
#include <format>

std::string answer_str(int num1, int num2, char op)
{
    return std::format("The answer of {} {} {} is: ", num1, op, num2);
}

int main()
{
    std::cout << "Hello, welcome to your personal calculator!\n";

    std::cout << "Please enter your first number (whole numbers only):\n";
    int x{};
    std::cin >> x;

    std::cout << "Please enter your second number (whole numbers only):\n";
    int y{};
    std::cin >> y;

    std::cout << "Please choose the operator you'd like to use:\n";
    std::cout << "Available operators: [ +, -, *, / ]\n";
    char op{}; // Holds the operator to be used
    std::cin >> op;

    switch (op)
    {
    case '+':
        std::cout << answer_str(x, y, op) << add(x, y) << '\n';
        break;
    case '-':
        std::cout << answer_str(x, y, op) << subtract(x, y) << '\n';
        break;
    case '*':
        std::cout << answer_str(x, y, op) << multiply(x, y) << '\n';
        break;
    case '/':
        std::cout << answer_str(x, y, op) << divide(x, y) << '\n';
        break;
    default:
        std::cout << "Illegal operator detected. Terminating program.\n";
        break;
    }

    return 0;
}
