#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define endn "\n"

int main(void)
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int len, temp;
    cin >> len;
    const int max_num = 1e5 + 3;
    int position[max_num], i;
    for (i = 0; i < len; i++)
    {
        cin >> temp;
        position[temp] = i;
    }
    int m;
    cin >> m;
    lli vasya = 0, petya = 0;
    for (i = 0; i < m; i++)
    {
        cin >> temp;
        vasya += position[temp] + 1;
        petya += len - position[temp];
    }
    cout << vasya << " " << petya << endn;

    return 0;
}
// by: p-nerd
// Sunday, June 13, 2021 | 07:14:53 PM (+06)
