#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.length();
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u')
        {
            cout << "vowels exist";
        }
    }
    return 0;
}