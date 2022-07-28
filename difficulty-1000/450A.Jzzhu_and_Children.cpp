#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long double ld;
#define endn "\n"
#define fasts ios_base::sync_with_stdio(false)
#define fastcc     \
    cin.tie(NULL); \
    cout.tie(NULL);

// Solve
void test(void)
{
    int n, m;
    cin >> n >> m;
    int result_indx, max = 0;
    double temp;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (ceil(temp / m) >= max)
        {
            max = ceil(temp / m);
            result_indx = i + 1;
        }
    }

    cout << result_indx << endn;
}

int main(void)
{
    fasts;
    fastcc;

    test();

    return 0;
}
// by: shihab4t
// Sunday, June 13, 2021 | 11:45:56 AM (+06)
