#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define xbe(x) x.begin(), x.end()

template <typename T>
void print(ostream &stream, const vec<T> &v)
{
    for (const auto &e : v)
        stream << e << gp;
    stream << ed;
}

void solve()
{
    int n;
    cin >> n;
    str s;
    cin >> s;
    map<char, int> last;

    for (int i = 0; i < n; i++)
    {
        // cerr << s[i] << gp << last[s[i]] << gp << i + 1 << gp << (last[s[i]] % 2) << gp << ((i + 1) % 2) << gp << (last[s[i]] % 2 != ((i + 1) % 2)) << ed;
        if (last[s[i]] == 0)
        {
            last[s[i]] = i + 1;
        }
        else
        {
            if (last[s[i]] % 2 != ((i + 1) % 2))
            {
                // cerr << ed;
                cout << "NO" << ed;
                return;
            }
            else
            {
                last[s[i]] = i + 1;
            }
        }
    }

    // cerr << ed;
    cout << "YES" << ed;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cerr << boolalpha;
    cout << boolalpha;

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}

// github.com/p-nerd (Shihab Mahamud)
// Thursday, April 20, 2023 | 01:18:47 PM (+06)
