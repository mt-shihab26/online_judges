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
map<string, int> m;
string temp;
void test(void)
{
    cin >> temp;
    if (m[temp] == 0)
        cout << "OK" << endn;
    else
        cout << temp << m[temp] << endn;
    m[temp]++;
}

int main(void)
{
    fastio;
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}
// Solved By: shihab4t
// Friday, June 18, 2021 | 07:48:35 PM (+06)
