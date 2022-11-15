#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using str = string;

#define vec         vector
#define endn        '\n'
#define first_io    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define file_io     freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define test_cases  int t; cin >> t; while (t--) solve();

template <typename tp> void print(tp arr[], int n) {for (int i = 0; i < n; i++) cout << arr[i] << " "; cout << '\n';}
template <typename tp> void print(set<tp> &s) {for (auto ith : s) {cout << ith << " ";} cout << endn;}

template <typename tp>
void print(vector<tp> &vc) {
    int len  = vc.size();    
    for (int i = len-1; i >= 0; i--) 
        cout << vc[i] << " ";
    cout << '\n';
}


void solve() {
    int n;
    cin >> n;
    vector<int> vc;
    for (int i = 1; i <= n; i++) {
        vc.push_back(i);
    }
    for (int i = 0; i < n; i++) {
        print(vc);
        next_permutation(vc.begin(), vc.end());
    }
}

int main() {
    first_io;

    test_cases;

    return 0;
}
// Shihab Mahamud (github.com/shh26b)
