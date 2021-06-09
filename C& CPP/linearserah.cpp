#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, key;
    int arr[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << i;
        }
    }
    return 0;
}