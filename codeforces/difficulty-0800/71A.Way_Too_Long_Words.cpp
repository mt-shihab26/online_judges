#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define endn "\n"

int test_case() {
    string word;
    cin >> word;
    if (word.size() <= 10) {
        cout << word<< endn;
        return 0;
    }

    cout << word[0] << word.size()-2 << word[word.size()-1] << endn;

    return 0;
}

int main(void) {
    int T;
    cin >> T;
    while(T--) {
        test_case();
    }
    return 0;
}

// By Shihab Mahamud
// Date: Saturday, June 05, 2021 | 12:17:50 PM (+06)
