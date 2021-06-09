#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[100] = {2, 3, 4, 3, 2};
    int arr2[100] = {3, 4, 2, 1, 3};
    int arr3[10];
    int n = sizeof(arr3) / sizeof(arr3[0]);
    cout << n;
    for (int i = 0; i < 5; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }

    sort(arr3, arr3 + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr3[i] << "  ";
    }

    return 0;
}