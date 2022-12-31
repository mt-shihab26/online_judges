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

    int n, m;
    cin >> n >> m;
    char a[n + 2][m + 2];
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '.')
            {
                if ((i + j) % 2)
                    a[i][j] = 'W';
                else
                    a[i][j] = 'B';
            }
            cout << a[i][j];
        }
        cout << endn;
    }
}
// Solved By: shihab4t
// Tuesday, July 27, 2021 | 04:31:12 PM (+06)
