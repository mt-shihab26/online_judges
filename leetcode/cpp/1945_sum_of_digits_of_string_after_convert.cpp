#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getLucky(string s, int k) {
        string num_s;
        for (auto single : s) {
            num_s += to_string(single - 'a' + 1);
        }
        int sum;
        while (k--) {
            sum = 0;
            for (auto single : num_s) {
                sum += (single - '0');
            }
            num_s = to_string(sum);
        }
        return sum;
    }
};

int main() {
    
}