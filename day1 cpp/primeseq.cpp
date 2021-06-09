#include <bits/stdc++.h>
using namespace std;

int main()
{
    int start, end;

    cin >> start >> end;

    while (start < end)
    {
        int flag = 1;
        for (int i = 2; i <= start / 2; i++)
        {
            if (start % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << start << " ";
        }
        start++;
    }
    return 0;
}