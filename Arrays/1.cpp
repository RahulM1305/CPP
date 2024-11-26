#include <iostream>
using namespace std;

// // Function to calculate the sum of elements in an array

// int calculateSum(const int arr[], int size)
// {

//     int sum = 0;

//     for (int i = 0; i < size; ++i)
//     {

//         sum += arr[i];
//     }

//     return sum;
// }

// int main()
// {

//     const int size = 5; // Adjust the size based on your array size

//     int arr[size];

//     // Input elements of the array

//     std::cout << "Enter " << size << " elements of the array:" << std::endl;

//     for (int i = 0; i < size; ++i)
//     {

//         std::cout << "Element " << i + 1 << ": ";

//         std::cin >> arr[i];
//     }

//     // Call the function to calculate the sum

//     int sum = calculateSum(arr, size);

//     // Print the sum

//     std::cout << "Sum of elements in the array: " << sum << std::endl;

//     return 0;
// }

int main()
{
    int n, sum = 0;
    int arr[n];

    cout << "size of the array:" << endl;
    cin >> n;
    cout << "enter elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "sum of elements:" << sum << endl;
}