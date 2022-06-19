#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool is_palindrome(string s) {
        for (int i = 0, j = s.length()-1; i < j; i++, j--) {
            if (s[i] != s[j]) return false;
        }
        return true;
    }
public:
    string firstPalindrome(vector<string>& words) {
        for (string ith : words) {
            if (is_palindrome(ith)) return ith;
        }
        return "";
    }
};
