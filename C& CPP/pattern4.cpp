
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k < (2 * i); k++)
        {
            cout << " ";
        }
        cout << " *";
        cout << "\n";
    }

    return 0;
}