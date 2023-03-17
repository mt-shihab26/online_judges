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

#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cout << name << " = " << arg1 << '\n';
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " = " << arg1 << " | ";
    __f(comma + 1, args...);
}
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
vector<int> get_randoms(int a, int f, int l)
{
    vector<int> t;
    srand(time(0));
    for (int i = 0; i < a; i++)
        t.push_back(f + ((rand() % (l - f + 1))));
    return t;
}
template <typename Tp>
void print(Tp arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << '\n';
}
template <typename Tp>
void print(const Tp &a)
{
    for (const auto &ith : a)
        cout << ith << " ";
    cout << '\n';
}
template <class Tp, class Tp2>
void print(umap<Tp, Tp2> a)
{
    for (auto &i : a)
    {
        cout << i.first << " " << i.second << '\n';
    }
    cout << '\n';
}

#define GLOBAL_ARRAY_SIZE 10000005
#define LOCAL_ARRAY_SIZE 100005
#define PI acos(-1.0)
#define EPS 1e-9
#define MOD 1000000007

void test_case()
{
    llint n, h;
    cin >> n >> h;
    vector<llint> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    llint low = 1;
    llint high = h;
    llint mid, wk, ans, i;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        wk = 0;
        for (i = 0; i < n - 1; i++)
        {
            wk += min(a[i + 1] - a[i], mid);
        }
        wk += mid;

        // debug(wk, mid);

        if (wk >= h)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (wk < h)
        {
            low = mid + 1;
        }
    }

    cout << ans << endn;
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
// Solved by: Shihab Mahamud (github.com/p-nerd)
// Monday, December 06, 2021 | 11:16:36 AM (+06)
