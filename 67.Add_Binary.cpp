#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string addBinary(string a, string b) {
        int len_a = a.length(), len_b = b.length();
        int i, j, in_hand = 0, sub_a, sub_b, added;
        string result = "";
        for (i = len_a-1, j = len_b-1; i >= 0 || j >= 0; i--, j--) {
            if (i < 0) sub_a = 0, sub_b = b[j] - '0';
            if (j < 0) sub_b = 0, sub_a = a[i] - '0';
            if (i >= 0 && j >= 0) sub_a = a[i] - '0', sub_b = b[j] - '0';
            added = sub_a + sub_b + in_hand;
            in_hand = 0;
            while (added >= 2) {
                added -= 2;
                in_hand++;
            }
            result = to_string(added) + result;
        }
        if (in_hand != 0) result = to_string(in_hand) + result;
        return result;
    }
};

int main() {
    Solution* s = new Solution;
    cout << s->addBinary("11", "1") << "\n";
}