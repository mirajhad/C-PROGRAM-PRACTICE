#include <bits/stdc++.h>
using namespace std;

int binary(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[100];
    int n, key;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> key;

    cout << binary(arr, n, key);
    return 0;
}