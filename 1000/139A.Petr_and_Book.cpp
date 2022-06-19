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
    int pages, i;
    cin >> pages;
    int days[7];
    for (i = 0; i < 7; i++)
        cin >> days[i];

    while (1) {
        for (i = 0; i < 7; i++) {
            pages -= days[i];
            if (pages <= 0) {
                cout <<i+1;
                return;
            }
        }
    }    
}

int main(void)
{
    fastio;

    test();
    
    return 0;
}
// by: shihab4t
// Monday, June 14, 2021 | 01:13:04 PM (+06)
