#include <bits/stdc++.h>
using namespace std;

string rev(string str)
{

    reverse(str.begin(), str.end());

    str.insert(str.end(), ' ');

    int n = str.length();
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            reverse(str.begin() + j, str.begin() + i);
            j = i + 1;
        }
    }
    str.pop_back();
    return str;
}
int main()
{
    string str;
    cin >> str;
    string str1 = rev(str);
    cout << str1;
    //cout << rev(str);
    return 0;
}