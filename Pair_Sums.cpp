#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define endn "\n"

void test(void)
{
    int len, k;
    cin >> len >> k;
    int pre, temp;
    cin >> pre;
    bool is = false;
    for (int i = 1; i < len; i++)
    {
        cin >> temp;
        if (temp + pre == k)
        {
            is = true;
        }
        pre = temp;
    }
    cout << (is ? "YES" : "NO");
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    test();

    return 0;
}
// Solved By: shihab4t
// Friday, June 25, 2021 | 03:38:05 AM (+06)
