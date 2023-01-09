#include <bits/stdc++.h>
using namespace std;

template <typename T>
istream &operator>>(istream &istream, vector<T> &v)
{
    int len = v.size();
    for (int i = 0; i < len; i++)
        cin >> v[i];
    return istream;
}

#define ed '\n'
#define gp ' '
#define i64 long long int
#define str string
#define vec vector
#define all(x) x.begin(), x.end()

int is_palindrome(int time)
{
    int minute = time % 60;
    time /= 60;
    // cout << time << " " << minute << ed;
    str s = "";
    if (time <= 9)
        s += '0';
    s += to_string(time);
    if (minute <= 9)
        s += '0';
    s += to_string(minute);

    int len = s.length();
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            return 0;
        }
    }
    return 1;
}

bool solve()
{
    str start;
    int step;
    cin >> start >> step;

    // cout << start << ed;
    int time = (start[0] - '0') * 10 + (start[1] - '0');
    time *= 60;
    time += (start[3] - '0') * 10 + (start[4] - '0');
    // cout << time << ed;

    int mn = 1440, ct = 0;

    int old = time;

    while (true)
    {
        ct += is_palindrome(time);
        time += step;
        time %= mn;
        if (old == time)
        {
            break;
        }
    }

    cout << ct << ed;

    return true;
}

bool test()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test();

    return 0;
}
// Shihab Mahamud (github.com/p-nerd)
