#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set
#define pb push_back
template<typename tem>
void print_vector(vector<tem> &vec) {
for (auto &ele : vec) cout<<ele<<" ";
cout << "\n";}

bool cmp(string a, string b) {
    return a > b;
}

void test() {
    string str;
    cin >> str;
    vector<string> sub_1;
    string temp = "";
    for (int i = 0; i < str.size(); i++) {
        while (str[i] == '1') {
            temp += str[i];
            i++;
        }
        if (temp != "") 
            sub_1.pb(temp);
        temp = "";
    }
    sort(sub_1.begin(), sub_1.end(), cmp);

    int ans = 0;
    for (int i = 0; i < sub_1.size(); i += 2) {
        ans += sub_1[i].size();
    }
    cout << ans << endn;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        test();
    }
}
// Solved By: p-nerd
// Saturday, July 31, 2021 |  7:27:37 PM (BST)
