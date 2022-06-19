#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) {
            int tmp = 0;
            while (num) {
                tmp += num % 10;
                num /= 10;
            }
            num = tmp;
        }
        return num;
    }
};

int main() {
    
}
// Thursday, February 10, 2022 | 04:05:30 AM (+06)
