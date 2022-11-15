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
    int num_of_cities;
    cin >>num_of_cities;
    int min = 1e9+5;
    int temp, i = 1, indx;
    while(num_of_cities--) {
        cin >>temp;
        if (temp < min) {
            min = temp;
            indx = i;
        }
        else if (temp == min) {
            indx = -1;
        }
        i++;
    }

    if (indx == -1)
        cout <<"Still Rozdil" <<endn;
    else
        cout <<indx <<endn;
}

int main(void)
{
    fastio;

    test();
    
    return 0;
}
// by: shh26b
// Monday, June 14, 2021 | 02:45:14 PM (+06)
