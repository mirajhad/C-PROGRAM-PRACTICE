#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int rem, rev = 0;
    int temp = n;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (temp == rev)
    {
        cout << "palindrome" << rev;
    }
    return 0;
}