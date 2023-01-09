#include <bits/stdc++.h>
using namespace std;

#define endn '\n'
#define str string

void test_case()
{
    int n;
    cin >> n;
    str a;
    cin >> a;

    str ans = "";

    if (n <= 1)
    {
        cout << a[0] << a[0] << endn;
        return;
    }

    if (a[0] == a[1])
    {
        cout << a[0] << a[0] << endn;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] >= a[i])
        {
            ans += a[i - 1];
        }
        else
        {
            ans += a[i - 1];
            cout << ans;
            reverse(ans.begin(), ans.end());
            cout << ans << endn;
            return;
        }
    }

    ans += a.back();
    cout << ans;
    reverse(ans.begin(), ans.end());
    cout << ans << endn;
}

/*
bbaa
bb
bbbb
bbaabb
bbaaaabb
*/

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        test_case();
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/p-nerd)
// Friday, January 07, 2022 | 09:37:16 PM (+06)