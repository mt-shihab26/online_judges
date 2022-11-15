#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long double ld;
#define endn "\n"
#define faststdio ios_base::sync_with_stdio(false);
#define fastcincout cin.tie(NULL); cout.tie(NULL);
#define fastio faststdio fastcincout

vector<int> gen_fibonacii(int num) {
    int first = 0, second = 1;
    vector<int> temp;
    temp.push_back(first);
    temp.push_back(second);
    int tmp;
    while (true) {
        tmp = first + second;
        first = second;
        second = tmp;
        temp.push_back(tmp);
        if (tmp == num) {
            break;
        }
    }
    return temp;
}
// Solve
void test(void) {
    int num;
    cin >>num;

    int a, b, z;

    if (num == 0) {
        a = b = z = 0;
    }
    else if (num == 1) {
        a = b = 0, z = 1;
    }
    else if (num == 2) {
        a = 0, b = z = 1;
    }
    else if (num == 3) {
        b = z = a = 1;
    }
    else {
        vector<int> re;
        re = gen_fibonacii(num);
        int len = re.size();
        z = re[len-2];    
        a = re[len-5];
        b = re[len-4];
    }
    cout <<a <<" "<<b <<" " <<z <<endn;
}

int main(void)
{
    fastio;
    
    test();
    
    return 0;
}
// Solved By: shh26b
// Monday, June 14, 2021 | 08:06:27 PM (+06)
