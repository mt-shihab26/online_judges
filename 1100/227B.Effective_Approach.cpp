#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long double ld;
#define endn "\n"
#define faststdio ios_base::sync_with_stdio(false);
#define fastcincout cin.tie(NULL); cout.tie(NULL);
#define fastio faststdio fastcincout

// Solve
void test(void) {
    int len, temp;
    cin >> len;
    const int max_num = 1e5 + 3;
    int possition[max_num], i;
    for (i = 0; i < len; i++) {
        cin >> temp;
        possition[temp] = i;
    }
    int m;
    cin >> m;
    lli vasya = 0, petya = 0;
    for (i = 0; i < m; i++) {
        cin >> temp;
        vasya += possition[temp] + 1;
        petya += len - possition[temp];
    }
    cout <<vasya <<" " <<petya <<endn;
}

int main(void)
{
    fastio;

    test();
    
    return 0;
}
// by: shihab4t
// Sunday, June 13, 2021 | 07:14:53 PM (+06)
