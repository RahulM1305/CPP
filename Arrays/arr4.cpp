// total no of triplets in the array whose sum is equal to given value x
#include <iostream>

using namespace std;

int main()
{
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter x:";
    int x;
    cin >> x;
    int pairs = 0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            for (int k = j + 1; k < 6; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    pairs++;
                }
            }
        }
    }

    cout << pairs << endl;
}