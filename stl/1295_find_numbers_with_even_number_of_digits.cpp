#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ct, evens = 0;
        for (auto &ele : nums) {
            ct = 0;
            while (ele > 0) {
                ele /= 10;
                ct++;
            }
            if (ct % 2 == 0) {
                evens++;
            }
        }
        return evens;
    }
};
