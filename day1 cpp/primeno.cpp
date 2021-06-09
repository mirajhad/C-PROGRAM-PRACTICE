#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 1)
    {
        cout << "not prime";
    }

    int flag = 1;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "prime" << n;
    }
    else
    {
        cout << " not prime";
    }
    return 0;
}