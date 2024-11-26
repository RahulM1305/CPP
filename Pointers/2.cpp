#include <iostream>

// Function to find and print the first and last digit of a number using pointers

void findFirstAndLastDigit(int number, int *firstDigit, int *lastDigit)
{

    *lastDigit = number % 10;

    // Find the first digit

    while (number >= 10)
    {

        number /= 10;
    }

    *firstDigit = number;
}

int main()
{

    int num, firstDigit, lastDigit;

    // Input a number

    std::cout << "Enter a number: ";

    std::cin >> num;

    // Call the function to find and print the first and last digits using pointers

    findFirstAndLastDigit(num, &firstDigit, &lastDigit);

    // Print the first and last digits

    std::cout << "First Digit: " << firstDigit << std::endl;

    std::cout << "Last Digit: " << lastDigit << std::endl;

    return 0;
}