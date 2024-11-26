#include <iostream>

// Function to calculate the sum of two numbers using pointers

void calculateSum(int *num1, int *num2, int *result)
{

    *result = *num1 + *num2;
}

int main()
{

    int num1, num2, sum;

    // Input two numbers

    std::cout << "Enter the first number: ";

    std::cin >> num1;

    std::cout << "Enter the second number: ";

    std::cin >> num2;

    // Pointers to the numbers and result

    int *ptrNum1 = &num1;

    int *ptrNum2 = &num2;

    int *ptrSum = &sum;

    // Call the calculateSum function using pointers

    calculateSum(ptrNum1, ptrNum2, ptrSum);

    // Print the sum

    std::cout << "Sum of " << *ptrNum1 << " and " << *ptrNum2 << " is: " << *ptrSum << std::endl;

    return 0;
}