#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long double ld;
#define endn "\n"

void display(vector <int> &vac) {
    int i;
    for (i = 0; i < vac.size()-1; i++)
        cout << vac[i] << " ";
    cout << vac[i] << endn;
}

int main(void) {
    int n;
    cin >> n;
    vector <int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    display(v);
    
    return 0;
}

// By Shihab Mahamud
// Date: Sunday, June 06, 2021 | 07:58:28 AM (+06)
