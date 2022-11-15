#include <bits/stdc++.h>
using namespace std;
// typedef
typedef long long int lli;
typedef long double ld;
// define
#define endn "\n"
#define faststdio ios_base::sync_with_stdio(false);
#define fastcincout \
    cin.tie(NULL);  \
    cout.tie(NULL);
#define fastio faststdio fastcincout
#define tc(sl)  \
    int T;      \
    cin >> T;   \
    while (T--) \
    {           \
        sl;     \
    }
#define vec vector
// functions
template <typename T>
inline void print_vector(vector<T> &vac)
{
    for (int ele : vac)
        cout << ele << " ";
    cout << "\n";
}

// Solve
void test(void)
{
    int n, m, tmp;
    cin >> n >> m;
    vec<int> ta;
    for (int i = 0; i < m; i++)
    {
        cin >> tmp;
        ta.push_back(tmp);
    }

    lli result = ta[0] - 1;
    for (int i = 1; i < m; i++)
    {
        if (ta[i - 1] > ta[i])
            result += ta[i] + (n - ta[i - 1]);
        else if (ta[i - 1] <= ta[i])
            result += ta[i] - ta[i - 1];
    }

    cout << result << endn;
}

int main(void)
{
    fastio;
    test();
    return 0;
}
// Solved By: shh26b
// Wednesday, June 16, 2021 | 12:57:51 AM (+06)
