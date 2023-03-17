#include <bits/stdc++.h>
using namespace std;

#define endn "\n"

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i;
    cin >> n;
    string str;
    cin >> str;
    for (i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            break;
        }
    }
    if (i % 2 == 0)
    {
        cout << "Takahashi" << endn;
    }
    else
    {
        cout << "Aoki" << endn;
    }
}
// Solved By: shihab4t
// Sunday, July 18, 2021 | 02:35:03 AM (+06)
