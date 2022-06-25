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
    int num_of_soilders;
    cin >>num_of_soilders;
    int height[num_of_soilders];
    for (int i = 0; i < num_of_soilders; i++) {
        cin >> height[i];
    }
    int min = 1e3+5, temp, indx;
    for (int i = 0; i < num_of_soilders-1; i++) {
        temp = abs(height[i]-height[i+1]);
        if (temp < min) {
            indx = i;
            min = temp;
        }
    }
    temp = abs(height[0] - height[num_of_soilders-1]);
    if (temp < min)
        cout <<num_of_soilders <<" " <<1 <<endn;
    else
        cout <<indx+1 <<" " <<indx+2 <<endn;
}

int main(void)
{
    fastio;

    test();
    
    return 0;
}
// by: shihab4t
// Monday, June 14, 2021 | 02:09:01 PM (+06)
