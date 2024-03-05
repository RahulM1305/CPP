// secord largest element in the array
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int arr[6] = {7, 8, 5, 4, 2, 1};
    // int size=6;
    sort(arr, arr + 6);
    cout << arr[1] << endl;
}