#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map

// Solve
void test_case()
{
    int len, time;
    cin >> len >> time;
    multiset<llint> value;
    llint temp;
    for (int i = 0; i < len; i++)
    {
        cin >> temp;
        value.insert(temp);
    }
    llint total = 0;
    for (int i = 0; i < time; i++)
    {
        auto it = value.end();
        it--;
        total += (*it);
        if (it != value.end())
            value.erase(it);
        value.insert((*it) / 2);
    }
    cout << total << endn;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        test_case();
    }

    return 0;
}
// Solved By: shihab4t
// Saturday, July 10, 2021 | 06:16:55 AM (+06)
