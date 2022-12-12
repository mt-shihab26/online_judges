#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool is_digit_sum_even(int num) {
        int sum = 0;
        while(num) {
            sum += num % 10;
            num /= 10;
        }
        return sum % 2 == 0;
    }
public:
    int countEven(int num) {
        int ct = 0;
        for (int i = 2; i <= num; i++) {
            if (is_digit_sum_even(i)) {
                ct++;
            }
        }
        return ct;
    }
};
