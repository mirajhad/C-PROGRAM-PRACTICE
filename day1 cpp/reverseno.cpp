#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num, rev = 0;
    while (n != 0)
    {
        num = n % 10;
        rev = rev * 10 + num;
        n /= 10;
    }
    cout << rev;
    return 0;
}