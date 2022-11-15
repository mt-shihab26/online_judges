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
    int s, n;
    cin >> s >> n;

    array<int, 2> arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i][0] >> arr[i][1];

    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (s <= arr[i][0])
        { // !s > x
            cout << "NO" << endn;
            return;
        }
        else
        {
            s += arr[i][1];
        }
    }
    cout << "YES" << endn;
}

int main(void)
{
    fastio;
    test();
    return 0;
}
// Solved By: shh26b
// Thursday, June 17, 2021 | 03:14:01 PM (+06)
