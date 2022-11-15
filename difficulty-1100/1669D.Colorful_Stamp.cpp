#include <bits/stdc++.h>
using namespace std;

using llint = long long int;
using str = string;

#define vec vector
#define endn '\n'

void solve()
{
    int n;
    cin >> n;
    str pic;
    cin >> pic;

    vec<str> pics;
    str tmp = "";

    for (int i = 0; i < n; i++)
    {
        if (pic[i] == 'W')
        {
            if (tmp != "")
                pics.push_back(tmp);
            tmp = "";
        }
        else
        {
            tmp += pic[i];
        }
    }

    if (tmp != "")
    {
        pics.push_back(tmp);
    }

    bool is_posable = false;

    // cout << pics.size() << " : " << pics << endn;

    for (str pic : pics)
    {
        if (pic.size() >= 2)
        {
            char fist = pic[0];
            is_posable = false;
            for (char c : pic)
            {
                if (fist != c)
                {
                    is_posable = true;
                }
            }
            if (is_posable == false)
            {
                break;
            }
        }
        else
        {
            is_posable = false;
            break;
        }
    }

    if (pics.size() == 0 && pic.size() != 0)
    {
        is_posable = true;
    }

    cout << (is_posable ? "YES" : "NO") << endn;
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
// Shihab Mahamud (github.com/shh26b)
// Saturday, April 23, 2022 | 05:48:33 AM (+06)
