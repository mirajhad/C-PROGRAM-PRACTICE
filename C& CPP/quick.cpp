#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {
        2,
        4,
        2,
        7,
        5,
    };
    int n = sizeof(arr) / sizeof(arr[0]);
    int pivot = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (pivot > arr[i])
        {
            for (int j = i; j > 0; j--)
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}