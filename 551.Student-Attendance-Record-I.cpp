class Solution {
public:
    bool checkRecord(string s) {
        int a = 0, l = 0;
        bool l_con = false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A') {
                l = 0;
                a++;
            }
            else if (s[i] == 'L') {
                l++;
                if (l >= 3) {
                    l_con = true;
                }
            }
            else {
                l = 0;
            }
        }
        if (a >= 2 || l_con) {
            return false;
        }
        else {
            return true;
        }
    }
};