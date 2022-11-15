#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using str = string;

#define vec vector
#define endn '\n'
#define first_io                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define file_io                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define loop(i, a, b) \
    for (i = a; i < b; i++)
#define test_cases \
    int t;         \
    cin >> t;      \
    while (t--)    \
        solve();

#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cout << name << " = " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " = " << arg1 << " | ";
    __f(comma + 1, args...);
}
template <typename Tp>
void print(Tp arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << '\n';
}
template <typename Tp>
void print(vector<Tp> &vc)
{
    for (auto &ith : vc)
        cout << ith << " ";
    cout << '\n';
}

#define PI acos(-1.0)
#define EPS 1e-9
#define MOD 1000000007

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    int tmp = n / 2;
    // cout << n << " " << a << " " << b << " : ";
    if (a == b)
    {
        cout << -1 << endn;
        return;
    }
    else if (a < b)
    {
        if (n - a < tmp)
        {
            cout << -1 << endn;
            return;
        }
        if (b - 1 >= tmp)
        {
            map<int, bool> mp;
            int ct = 1;
            cout << a << " ";
            mp[a] = true;
            for (int i = n; i > b; i--)
            {
                cout << i << " ";
                mp[i] = true;
                ct++;
            }
            for (int i = b - 1; ct < tmp; i--)
            {
                if (i != a)
                {
                    cout << i << " ";
                    mp[i] = true;
                    ct++;
                }
            }

            ct = 0;
            for (int i = b; ct < tmp; i--)
            {
                if (mp[i] != true)
                {
                    cout << i << " ";
                    ct++;
                }
            }
            cout << endn;
            return;
        }
        else
        {
            cout << -1 << endn;
            return;
        }
    }
    else
    {
        if (tmp + 1 == a && tmp == b)
        {
            for (int i = a; i <= n; i++)
            {
                cout << i << " ";
            }
            for (int i = b; i >= 1; i--)
            {
                cout << i << " ";
            }
            cout << endn;
            return;
        }
        else
        {
            cout << -1 << endn;
            return;
        }
    }
    cout << endn;
}

int main()
{
    first_io;

    test_cases;

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shh26b)
// Wednesday, February 02, 2022 | 02:06:53 AM (+06)
// Accepted: 03:07:16 AM (+06)
