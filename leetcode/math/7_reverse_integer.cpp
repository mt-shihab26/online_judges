#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(long long x) {
        bool is_neg = false;
        if (x < 0) {
            is_neg = true;
            x *= -1;
        }
        long long int res = 0;
        while (x) {
            cout << res << "\n";
            int last = x % 10;
            res = (res * 10) + last;                
            x /= 10;
        }
        
        if (is_neg) {
            res = res * -1;
            if (res < INT_MIN) {
                return 0;
            }
        } else {
            if (res > INT_MAX) {
                return 0;
            }
        }
        return res;
    }
};

int main() {
    
}
// Monday, April 04, 2022 | 02:01:00 PM (+06)
