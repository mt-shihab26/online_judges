#include <bits/stdc++.h>
using namespace std;
// typedef
typedef long long int lli;
typedef long double ld;
typedef string str;
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
    str st;
    cin >> st;
    vec<int> chr_hash(27, 0);
    for (int i = 0; i < st.size(); i++)
    {
        chr_hash[st[i] - 97]++;
        if (chr_hash[st[i] - 97] > 1)
        {
            cout << "Yes" << endn;
            return;
        }
    }
    cout << "No" << endn;
}

int main(void)
{
    fastio;
    tc(test());
    return 0;
}
// Solved By: shihab4t
// Thursday, June 17, 2021 | 06:54:36 PM (+06)
