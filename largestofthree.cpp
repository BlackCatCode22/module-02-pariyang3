#include <iostream>

int main() {
    // Declare variables to store user input
    int num1, num2, num3;

    // Ask the user to enter three numbers
    std::cout << "Enter a number: ";
    std::cin >> num1;

    std::cout << "Enter another number: ";
    std::cin >> num2;

    std::cout << "Enter a third number: ";
    std::cin >> num3;

    // Determine the largest number using nested if statements
    int largest;
    if (num1 >= num2) {
        if (num1 >= num3) {
            largest = num1;
        }
        else {
            largest = num3;
        }
    }
    else {
        if (num2 >= num3) {
            largest = num2;
        }
        else {
            largest = num3;
        }
    }

    // Output the largest number
    std::cout << "The largest number is: " << largest << std::endl;

    return 0;
}
