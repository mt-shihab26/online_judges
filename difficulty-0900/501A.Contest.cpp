#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define lli long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

bool solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int misha = max(3 * a / 10, a - (a / 250 * c));
    int vasya = max(3 * b / 10, b - (b / 250 * d));

    cout << (misha == vasya ? "Tie" : misha > vasya ? "Misha"
                                                    : "Vasya")
         << ed;

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// github.com/p-nerd (Shihab Mahamud)
// Sunday, July 24, 2022 | 10:28:17 PM (+06)
