#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumSum(int num) {
        vector<int> a;
        while(num) {
            a.push_back(num % 10);
            num /= 10;
        }
        
        sort(a.begin(), a.end());
        
        int new1 = a[0]*10 + a[2];
        int new2 = a[1]*10 + a[3];
        return new1 + new2;
    }
};

