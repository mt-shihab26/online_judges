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

    int a, b, s;
    cin >> a >> b >> s;

    a = abs(a), b = abs(b);
    cout << (a + b <= s && (s - (a + b)) % 2 == 0 ? "Yes" : "No") << ed;

    return 0;
}
// github.com/p-nerd (Shihab Mahamud)
// Tuesday, August 23, 2022 | 11:15:33 PM (+06)
