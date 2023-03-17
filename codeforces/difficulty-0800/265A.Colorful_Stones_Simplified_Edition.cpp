#include <bits/stdc++.h>
using namespace std;

#define ed '\n';

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;

    int slen = s.length();
    int tlen = t.length();
    int si = 0, ti = 0;

    for (; ti < tlen; ti++)
    {
        if (s[si] == t[ti])
        {
            cerr << t[ti] << " " << s[si] << ed;
            si++;
        }
    }
    cout << si + 1 << ed;
}