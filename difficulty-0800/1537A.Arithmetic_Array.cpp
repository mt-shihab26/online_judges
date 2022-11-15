#include <bits/stdc++.h>
using namespace std;
//typedef
typedef long long int lli;
typedef long double ld;
typedef string str;
//define
#define endn "\n"
#define faststdio ios_base::sync_with_stdio(false);
#define fastcincout cin.tie(NULL); cout.tie(NULL);
#define fastio faststdio fastcincout
#define vec vector
//functions
template <typename T>
inline void print_vector(vector<T> &vac) {
for (int ele:vac) cout <<ele <<" "; cout <<"\n";}

// Solve
void test(void) {
    int k;
    cin >>k;
    vec<int> a;
    int sum = 0, temp;
    for (int i = 0; i < k; i++) {
        cin >>temp;
        sum += temp;
        a.push_back(temp);
    }
    if (sum == k) {
        cout <<0 <<endn;
    }
    else if (sum > k) {
        cout <<sum-k <<endn;
    }
    else if (sum < k) {
        cout <<1 <<endn;
    }
    else if (sum < 0) {
        cout <<1 <<endn;
    }
}

int main(void)
{
    fastio;
    int t;
    cin >>t;
    while (t--)
        test();
    return 0;
}
// Solved By: shh26b
// Friday, June 18, 2021 | 08:43:47 PM (+06)
