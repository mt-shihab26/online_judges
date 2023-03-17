#include <bits/stdc++.h>
using namespace std;
// Macros
typedef long long int lli;
typedef long double ld;
#define endn "\n"

// Solve
void test(void)
{
    int num;
    cin >> num;
    bool is = false;
    while (num > 0)
    {
        if (num % 11 == 0 || num % 111 == 0)
        {
            is = true;
            break;
        }
        num -= 111;
    }
    if (is)
        cout << "YES" << endn;
    else
        cout << "NO" << endn;
}

int main(void)
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}
// by: p-nerd
