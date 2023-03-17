#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define endn "\n"

void test()
{
    ll s;
    cin >> s;
    ll column = 0, row = 0;
    ll root = ceil(sqrt(s));

    if ((root * root) - s >= root)
    {
        column = root;
        row = s - (root - 1) * (root - 1);
    }
    else
    {
        row = root;
        column = root * root - s + 1;
    }
    if (root % 2 == 0)
    {
        swap(row, column);
    }
    cout << column << " " << row << endn;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, i = 1;
    cin >> t;
    while (t--)
    {
        cout << "Case " << i << ": ";
        test();
        i++;
    }
}
// Solved By: shh26b
// Thursday, August 05, 2021 | 08:01:53 PM (BST)
// Accepted: 08:44:06 PM (BST)
