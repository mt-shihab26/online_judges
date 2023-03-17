#include <bits/stdc++.h>
using namespace std;


class Solution {
    string string_multiplication2(const string &a, const string &b) {
        vector<vector<long long>> al;
        int k = 0, i, j, len, m;
        for (i = b.size()-1; i >= 0; i--) {
            vector<long long> rs;
            len = a.size();
            for (j = 0; j < len; j++) {
                rs.push_back((b[i]-'0') * (a[j]-'0'));
            }
            for (m = 0; m < k; m++) {
                rs.push_back(0);
            }
            k++;
            al.push_back(rs);
        }

        int len_al = al.size();
        k--;
        for (i = 0; i < len_al && k > 0; i++) {
            for (j = 0; j < k; j++) {
                al[i].insert(al[i].begin(), 0);
            }
            k--;
        }

        int len_ith = al.front().size();

        bool is = false;

        string final_res;
        long long sum = 0;
        for (i = len_ith-1; i >= 0; i--) {
            for (j = 0; j < len_al; j++) {
                sum += al[j][i];
            }
            final_res += to_string(sum % 10);
            if (sum % 10 != 0) is = true;
            sum /= 10;
        }
        if (sum > 0) final_res += to_string(sum);
        reverse(final_res.begin(), final_res.end());

        if (is == false) return "0";

        return final_res;
    }

public:
    string multiply(string num1, string num2) {
        return string_multiplication2(num1, num2);
    }
};

int main() {
    Solution sol = Solution();

    string num1, num2;
    getline(cin, num1);
    getline(cin, num2);
    
    // cout << num1 << " " << num2 << "\n";
    cout << sol.multiply(num1, num2) << "\n";
}
