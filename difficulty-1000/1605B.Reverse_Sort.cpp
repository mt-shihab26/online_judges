#include <bits/stdc++.h>
using namespace std;

#define endn '\n'
#define pb push_back

template <typename Tp>
void print(const Tp &vc)
{
    for (auto &ith : vc)
        cout << ith << " ";
    cout << '\n';
}

void test_case()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int zeros = 0, ones = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0')
            zeros++;
        else
            ones++;
    }
    vector<int> ans;
    int i;
    for (i = 0; i < zeros; i++)
    {
        if (str[i] == '1')
            ans.pb(i + 1);
    }
    for (; i < n; i++)
    {
        if (str[i] == '0')
            ans.pb(i + 1);
    }
    if (ans.size() == 0)
    {
        cout << 0 << endn;
        return;
    }
    cout << 1 << endn;
    cout << ans.size() << " ";
    print(ans);
}

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
// Solved by: Shihab Mahamud (github.com/shh26b)
// Thursday, November 18, 2021 | 12:28:06 PM (+06)
