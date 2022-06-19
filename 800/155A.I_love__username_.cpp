#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define endn "\n"

int main(void) {
    int len;
    cin >> len;
    int num, best, count, worst;
    cin >> num;
    best = num;
    worst = num;

    len -= 1;
    count = 0;
    while (len--) {
        cin >> num;
        if (num > best) {
            count++;
            best = num;
        }
        else if (num < worst) {
            count++;
            worst = num;
        }
    }
    
    cout << count << endn;
    
    return 0;
}