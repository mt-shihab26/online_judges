#include <bits/stdc++.h>
using namespace std;
//define
#define endn "\n"
#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL); \
    cout.tie(NULL);

// Solve
int hsh[102];
void test(void) {
    int n;
    cin >>n;
    int coin;
    int max = 0;
    for (int i = 0; i < n; i++) {
        cin >>coin;
        hsh[coin]++;
        if (hsh[coin] > max) {
            max = hsh[coin];
        }
    }
    cout <<max <<endn;

}

int main(void) {
    fastio;
    test();
    return 0;
}
// Solved By: shh26b
// Sunday, June 20, 2021 | 01:33:13 AM (+06)
