#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> one, two, three;

    int n, tmp;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> tmp;
        if (tmp == 1)
            one.push_back(i);
        else if (tmp == 2)
            two.push_back(i);
        else
            three.push_back(i);
    }

    // cout << one << " " << two << " " << three << ed;

    int mn = min({one.size(), two.size(), three.size()});

    cout << mn << ed;

    for (int i = 0; i < mn; i++)
    {
        cout << one[i] << " " << two[i] << " " << three[i] << ed;
    }

    return 0;
}