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
inline void file_io()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

template <typename Tp>
void print(const Tp &vc)
{
    for (auto &ith : vc)
        cout << ith << " ";
    cout << '\n';
}

#define GLOBAL_ARRAY_SIZE 10000005
#define LOCAL_ARRAY_SIZE 100005
#define PI acos(-1.0)
#define EPS 1e-9
#define MOD 1000000007

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
// Thursday, November 18, 2021 | 12:28:06 PM (+06)
