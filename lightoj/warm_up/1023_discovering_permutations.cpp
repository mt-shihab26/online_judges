#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using str = string;

#define endn '\n'

int facto(int n)
{
    ll re = 1;
    while (n)
    {
        re *= n;
        n--;
    }
    return re;
}

void test_case()
{
    int n, k;
    cin >> n >> k;

    str st;

    for (int i = 0; i < n; i++)
    {
        st += 'A' + i;
    }

    k = min(facto(n), k);

    for (int i = 0; i < k; i++)
    {
        cout << st << endn;
        next_permutation(st.begin(), st.end());
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, i = 1;
    cin >> t;
    while (t--)
    {
        cout << "Case " << i++ << ":\n";
        test_case();
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shh26b)
// Tuesday, January 04, 2022 | 10:44:30 AM (+06)
