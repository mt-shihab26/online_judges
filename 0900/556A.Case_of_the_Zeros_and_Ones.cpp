#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string str;
    cin >> n >> str;
    int ct_0 = 0, ct_1 = 0;
    for (int i = 0; i < str.length(); i++) {
        ct_0 += (str[i] == '0');
        ct_1 += (str[i] == '1');
    }
    cout << abs(ct_0 - ct_1) << endn;
    
}
// Solved By: shihab4t
// Friday, July 16, 2021 | 12:00:15 PM (+06)
