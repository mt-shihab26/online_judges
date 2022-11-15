#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set
#define pb push_back
template <typename tem>
void print_vector(vector<tem> &vec)
{
    for (auto &ele : vec)
        cout << ele << " ";
    cout << "\n";
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    bool is_all_equal = true;
    cin >> a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = k - 1;
    int k_value = a[k - 1];
    for (int i = k - 1; i < n; i++)
    {
        if (k_value != a[i])
            ans = -1;
    }
    if (ans != -1)
    {
        for (int i = k - 2; i >= 0; i--)
        {
            if (a[i] != k_value)
            {
                break;
            }
            else
            {
                ans--;
            }
        }
    }

    cout << ans << endn;
}
// Solved By: shh26b
// Sunday, August 01, 2021 | 07:19:58 PM (+06)
