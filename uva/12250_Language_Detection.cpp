// بسم الله الرحمن الرحيم
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

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string str, ans;
    int i = 1;
    while (true) {
        cin >> str;
        if (str == "#")
            break;
        
        ans = "UNKNOWN";
        if (str == "HELLO")
            ans = "ENGLISH";
        else if (str == "HOLA")
            ans = "SPANISH";
        else if (str == "HALLO")
            ans = "GERMAN";
        else if (str == "BONJOUR")
            ans = "FRENCH";
        else if (str == "CIAO")
            ans = "ITALIAN";
        else if (str == "ZDRAVSTVUJTE")
            ans = "RUSSIAN";

        cout << "Case " << i << ": " << ans << endn;
        i++;
    }
}
// Solved By: shihab4t
// Friday, July 30, 2021 | 03:09:05 AM (+06)
