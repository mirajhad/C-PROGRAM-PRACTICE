#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, arm = 0;
    cin >> n;
    int temp = n;
    while (n > 0)
    {
        int rem = n % 10;
        arm = arm + (rem * rem * rem);
        n /= 10;
    }

    if (temp == arm)
    {
        cout << "armstrog";
    }

    return 0;
}