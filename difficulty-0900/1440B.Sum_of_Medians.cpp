#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set

void test()
{
    double n;
    int k;
    cin >> n >> k;
    vector<int> value;
    int tmp;
    for (int i = 0; i < n * k; i++)
    {
        cin >> tmp;
        value.push_back(tmp);
    }
    int m_indx = ceil(n / 2);
    llint sum = 0;
    int left = n - m_indx;
    int i = value.size() - 1;
    i -= left;
    for (int j = 0; j < k; j++)
    {
        sum += value[i];
        i -= (left + 1);
    }
    cout << sum << endn;
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
        test();
    }
}
// Solved By: shihab4t
// Thursday, July 22, 2021 | 06:11:46 PM (+06)
