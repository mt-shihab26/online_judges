#include <bits/stdc++.h>
using namespace std;

#define llint long long int
#define pb push_back
#define endn "\n"

bool cmp(int a, int b)
{
    return a > b;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, i, tmp;
    cin >> n >> m;
    vector<int> mx_a(m), mn_a(m);
    for (i = 0; i < m; i++)
    {
        cin >> tmp;
        mx_a[i] = tmp;
        mn_a[i] = tmp;
    }
    sort(mn_a.begin(), mn_a.end());

    llint mn_sum = 0;
    int tmp_n = n, j;
    for (i = 0; i < m && tmp_n; i++)
    {
        for (j = mn_a[i]; j > 0 && tmp_n; j--)
        {
            mn_sum += j;
            tmp_n--;
        }
    }
    tmp_n = n;

    vector<int> fracked_mx;
    for (i = 0; i < m; i++)
    {
        for (j = mx_a[i]; j > 0; j--)
        {
            fracked_mx.pb(j);
        }
    }
    sort(fracked_mx.begin(), fracked_mx.end(), cmp);

    llint mx_sum = 0;
    for (i = 0; tmp_n; i++)
    {
        mx_sum += fracked_mx[i];
        tmp_n--;
    }

    cout << mx_sum << " " << mn_sum << endn;
}
// Solved By: p-nerd
// Monday, July 26, 2021 | 01:37:00 PM (BST)
