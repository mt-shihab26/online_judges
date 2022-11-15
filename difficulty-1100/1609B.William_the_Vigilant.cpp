#include <bits/stdc++.h>
using namespace std;

#define endn '\n'

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;

    cin >> n >> q;
    string str;
    cin >> str;

    int ct = 0;
    for (int i = 2; i < n; i++)
    {
        if (str[i - 2] == 'a' && str[i - 1] == 'b' && str[i] == 'c')
        {
            ct++;
            i += 2;
        }
    }

    int i;
    char ch;
    while (q--)
    {
        cin >> i >> ch;
        i--;

        int ect = 0;

        for (int j = i - 2; j <= i; j++)
        {
            if (str[j] == 'a' && str[j + 1] == 'b' && str[j + 2] == 'c')
            {
                ect++;
            }
        }

        str[i] = ch;

        int fct = 0;
        for (int j = i - 2; j <= i; j++)
        {
            if (str[j] == 'a' && str[j + 1] == 'b' && str[j + 2] == 'c')
            {
                fct++;
            }
        }

        if (fct > ect)
        {
            ct += fct - ect;
        }
        else
        {
            ct -= ect - fct;
        }

        cout << ct << endn;
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shh26b)
// Thursday, December 09, 2021 | 11:33:08 AM (BST)
// Accepted: 12:40:35 PM (BST)
