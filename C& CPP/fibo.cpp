#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n;
    int fact = 1;
    cin >> n;
    cout << fib(n);
    return 0;
}