#include <bits/stdc++.h>
using namespace std;

using llint = long long int;
using str = string;

#define vec vector
#define endn '\n'

void solve()
{
    int n, r, b;
    cin >> n >> r >> b;
    int bsm = ceil(r * 1.0 / (b + 1));
    int sm = r / (b + 1);

    int bsm_ct = r % (b + 1);

    string res = "";
    string bsm_str = string(bsm, 'R');
    string sm_str = string(sm, 'R');

    while (b--)
    {
        if (bsm_ct > 0)
        {
            res += (bsm_str + "B");
            bsm_ct--;
        }
        else
        {
            res += (sm_str + "B");
        }
    }

    if (bsm_ct > 0)
    {
        res += bsm_str;
    }
    else
    {
        res += sm_str;
    }

    cout << res << endn;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
// Tuesday, April 19, 2022 | 04:48:31 PM (+06)
