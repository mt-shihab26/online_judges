#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define endn "\n"

int main(void) {
    int s[4], i, j;
    int count;

    for (i = 0; i < 4; i++) {
        cin >> s[i];
    }
    
    int total = 0;
    for (i = 0; i < 4; i++) {
        if (s[i] != -1) {
            count = 0;
            for (j = i+1; j < 4; j++) {
                if (s[i] == s[j]) {
                    s[j] = -1;
                    count++;
                }
            }
            total += count;
            // cout << count << endn;
        }
    }

    cout << total << endn;
    
    
    return 0;
}

// By Shihab Mahamud
// Date: Saturday, June 05, 2021 | 12:40:56 PM (+06)
