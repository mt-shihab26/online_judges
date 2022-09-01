#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int mod = 1e9 + 7;
const int inf = 1e9;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    str fin_str = "Timur";
    sort(fin_str.begin(), fin_str.end());

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        str st;
        cin >> st;

        if (n != 5)
        {
            cout << "NO" << ed;
            continue;
        }

        sort(st.begin(), st.end());

        if (fin_str != st)
        {
            cout << "NO" << ed;
            continue;
        }
        cout << "YES" << ed;
    }

    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Wednesday, August 31, 2022 | 12:23:51 PM (+06)
