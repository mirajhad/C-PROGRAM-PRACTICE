#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1;
    int count = 0;
    cin >> str1;
    int n = str1.size();
    for (int i = n - 1; i >= 0; i--)
    {
        cout << str1[i];
    }

    return 0;
}