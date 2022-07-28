#include <bits/stdc++.h>
using namespace std;

#define endn '\n'
#define umap unordered_map
#define uset unordered_set
#define pb push_back

typedef short int sint;
typedef unsigned int uint;
typedef long long int llint;
typedef unsigned long long int ullint;
typedef const char cchar;

inline void first_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

#define GLOBAL_ARRAY_SIZE 10000005
#define LOCAL_ARRAY_SIZE 100005
#define PI acos(-1.0)
#define EPS 1e-9
#define MOD 1000000007

void test_case()
{
    int n, i, j;
    cin >> n;
    vector<int> a(n);
    umap<int, int> am;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        am[a[i]]++;
    }

    // sort(a.begin(), a.end());

    int mn = *min_element(a.begin(), a.end());

    // print(a);

    int half_n = n / 2;

    for (i = 0, j = 0; j < half_n && i < n; i++)
    {
        if (mn != a[i])
        {
            cout << a[i] << " " << mn << endn;
            j++;
        }
    }

    // for (int i = 1; i <= half_n; i++) {
    //     cout << a[i] << " " << a[0] << endn;
    // }

    // for (i = 0; i < n && half_n > 0; i++) {
    //     for (j = i + 1; j < n && half_n > 0; j++) {
    //         if (a[j] != a[i] && am[a[j] % a[i]] == 0) {
    //             half_n--;
    //             cout << a[j] << " " << a[i] << endn;
    //         }
    //     }
    // }
    // cout << endn;

    // O(n log n)
}

int main(void)
{
    first_io();

    int t;
    cin >> t;
    while (t--)
    {
        test_case();
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
// Sunday, December 05, 2021 | 09:48:09 AM (+06)
// Accepted: 10:52:32 AM (+06)
