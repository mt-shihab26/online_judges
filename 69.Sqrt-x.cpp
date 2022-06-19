#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1) return x;
        long long int low = 1, high = x, mid, ans;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if ((mid * mid) == x) {
                return mid;
            }
            if (mid * mid < x) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
            cout << mid << " ";
        }
        return ans;
    }
};

int main() {
    
}

