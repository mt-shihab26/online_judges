#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define endn "\n"

int main(void) {
    int n, i, temp;
    cin >> n;
    int money;
    vector <int> all_count;

    ll hello, hello;

    int count = 0, previes = 0;
    for (i = 0; i < n; i++) {
        cin >> money;
        if (previes <= money) {
            count++;
        }
        else {
            all_count.push_back(count);
            count = 1;
        }
        previes = money;

        if (n-1 == i) {
            all_count.push_back(count);
        }
    }

    int result = all_count[0];
    for (i = 1; i < all_count.size(); i++) {
        if (result < all_count[i]) {
            result = all_count[i];
        }
    }
    cout << result << endn;
    
    
    return 0;
}