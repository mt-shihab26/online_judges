#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long double ld;
#define endn "\n"

int main(void) {
    int n;
    cin >> n;
    vector <int> s;

    int t = 2, len, temp, i, j;
    while (t--) {
        cin >> len;
        for (i = 0; i < len; i++) {
            cin >> temp;
            s.push_back(temp);
        }
    }

    sort(s.begin(), s.end());

    int count = 0;
    for (i = 0; i < s.size(); i++) {
        if (s[i] != -1) {
            for (j = i + 1; j < s.size(); j++) {
                if (s[i] == s[j]) {
                    s[j] = -1;
                }
            }
            count++;
        }
    }

    if (count == n) 
        cout << "I become the guy." << endn;
    else
        cout << "Oh, my keyboard!" << endn;

    return 0;
}

// By Shihab Mahamud
// Date: Sunday, June 06, 2021 | 08:17:17 AM (+06)
