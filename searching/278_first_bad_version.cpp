#include <bits/stdc++.h>
using namespace std;
bool isBadVersion(int);


// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int rs, l = 1, md;
        
        while (l <= n) {
            md = l + (n - l) / 2;
            if (isBadVersion(md)) {
                rs = md;
                n = md - 1;
            }
            else {
                l = md + 1;
            }
        }
        return rs;
    }
};


int main() {
    
}
