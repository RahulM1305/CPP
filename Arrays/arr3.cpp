// total no of pairs in the array whose sum is equal to given value x
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter x:";
    int x;
    cin >> x;
    int pairs = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                pairs++;
            }
        }
    }

    cout << pairs << endl;
}