#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
typedef unsigned int uint;
#define endn '\n'
#define umap unordered_map
#define uset unordered_set
#define pb push_back

void test()
{
    llint x, y, a, b;
    cin >> x >> y >> a >> b;

    llint sum = 0;
    if (a + a > b)
    {
        if (x > y)
            swap(x, y);
        sum = (x * b) + ((y - x) * a);
    }
    else
    {
        sum = (x + y) * a;
    }

    cout << sum << endn;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        test();
    }
}
// Solved By: shh26b
// Monday, August 09, 2021 | 12:19:25 AM (+06)
// Accepted: 12:51:17 AM (+06)
