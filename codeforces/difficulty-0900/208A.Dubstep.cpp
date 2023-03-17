#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long double ld;
#define endn "\n"


int main(void) {
    string remix;
    cin >> remix;

    size_t indx;

    while(1) {
        indx = remix.find("WUB");
        if (string::npos == indx) {
            break;
        }
        remix.replace(indx, 3, " ");
    }

    int i;
    for (i = 0; i < remix.size();) {
        if (remix[i] == ' ') {
            i++;
        }
        else {
            break;
        }
    }

    for (; i < remix.size(); i++) {
        if (remix[i] == ' ' && remix[i+1] == ' ') {
            i++;
        }
        cout << remix[i];
    }
    cout << endn;
    
    return 0;
}

// By Shihab Mahamud
// Date: Sunday, June 06, 2021 | 09:31:32 PM (+06)
