#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int flag = 1;
    if (n <= 1)
    {
        cout << "not prime";
    }
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
        cout << "not prime";
    else
        cout << "prime";
    return 0;
}