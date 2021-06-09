#include <bits/stdc++.h>
using namespace std;

int main()
{
    int start, end;
    int low, high;
    cin >> low >> high;

    while (low < high)
    {
        int flag = 1;
        for (int i = 2; i <= low / 2; i++)
        {
            if (low % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << low;
        low++;
    }
    return 0;
}