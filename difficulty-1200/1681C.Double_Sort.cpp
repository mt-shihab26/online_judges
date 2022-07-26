#include <bits/stdc++.h>
using namespace std;

template <typename T> istream &operator>>(istream &istream, vector<T> &v) { int len = v.size(); for (int i = 0; i < len; i++) cin >> v[i]; return istream; }
template <typename T> ostream &operator<<(ostream &ostream, const set<T> &s) { for (auto ith : s) cout << ith << " "; return ostream;}
template <typename T> ostream &operator<<(ostream &ostream, const vector<T> &v) { for (auto ith : v) cout << ith << " "; return ostream; }
template <typename T, typename T2> ostream &operator<<(ostream &ostream, const pair<T, T2> &p) { return (ostream << p.first << " " << p.second << "\n"); }
template <typename T, typename T2> ostream &operator<<(ostream &ostream, const map<T, T2> &mp) { for (auto ith : mp) cout << ith << "\n"; return ostream;}

#define ed '\n'
#define gp ' '
#define int64 long long int
#define str string
#define vec vector

void solve()
{
    int n; cin >> n; vec<int> a(n), b(n); cin >> a >> b;
    vec<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j+1] || b[j] > b[j+1])
            {
                swap(a[j], a[j+1]);
                swap(b[j], b[j+1]);
                ans.push_back({j+1, j+2});
            }
        }
    }

    bool is_sorted = true;

    for (int i = 0; i < n-1; i++)
    {
        if (a[i] > a[i+1] || b[i] > b[i+1])
        {
            is_sorted = false;
            break;
        } 
    }


    if (is_sorted)
    {
        cout << ans.size() << ed;
        for (pair<int, int> i : ans)
        {
            cout << i.first << gp << i.second << ed;
        }
    }
    else
    {
        cout << -1 << ed;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
