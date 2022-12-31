#include <bits/stdc++.h>
using namespace std;

#define endn "\n"

int test()
{
    int A, B;
    cin >> A >> B;
    cout << (A * 1LL * (to_string(B + 1).length() - 1)) << endn;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    while (n--)
    {
        test();
    }
}
// Solved By: shihab4t
// Monday, August 02, 2021 | 10:22:13 AM (BST)
