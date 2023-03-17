#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define endn "\n"

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string bord;
    string temp;

    for (int i = 0; i < 8; i++) {
        cin >>temp;
        bord += temp;
    }

    sort(bord.begin(), bord.end());
    reverse(bord.begin(), bord.end());
    size_t a = bord.find('.');
    if (a != string::npos) {
        bord.erase(a, bord.size()-a);
    }    

    map<char, int> weight{{'q', 9}, {'r', 5}, {'b', 3}, 
                            {'n', 3}, {'p', 1}, {'k', 0}};
    // cout <<bord;

    int white_w = 0, black_w = 0;
    for (int i = 0; i < bord.size(); i++) {
        if (bord[i] >= 'A' and bord[i] <= 'Z') {
            white_w += weight[(bord[i]+32)];
        }
        else {
            black_w += weight[bord[i]];
        }
    }

    if (white_w > black_w) {
        cout <<"White" <<endn;
    }
    else if (black_w > white_w) {
        cout <<"Black" <<endn;
    }
    else {
        cout <<"Draw" <<endn;
    }

    return 0;
}
// Solved By: p-nerd
// Wednesday, June 30, 2021 | 03:37:21 AM (+06)
