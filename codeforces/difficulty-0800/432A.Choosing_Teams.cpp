#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp + k <= 5)
        {
            a.push_back(tmp);
        }
    }

    int total = a.size() / 3;

    cout << total << ed;

    return 0;
}