#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j < i; j++)
        {
            cout << "*";
        }
        cout << " ";
        cout << "\n";
    }
    return 0;
}