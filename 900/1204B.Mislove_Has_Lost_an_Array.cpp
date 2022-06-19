#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set
#define pb push_back

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, l, r;
    cin >> n >> l >> r;
    int min_sum = 1;
    vector<int> min_arr;
    min_arr.pb(1);
    int temp_l = l-1;
    for (int i = 2; temp_l ; i += 2) {
        if (find(min_arr.begin(), min_arr.end(), (i / 2)) != min_arr.end()) {
            min_arr.pb(i);
            min_sum += i;
            temp_l--;
        }
    }
    min_sum += (n-l);

    vector<int> mx_arr;
    mx_arr.pb(1);
    int mx_sum = 1;
    int temp_r = r-1;
    for (int i = 2; temp_r; i += 2) {
        if (find(mx_arr.begin(), mx_arr.end(), (i / 2)) != mx_arr.end()) {
            mx_arr.pb(i);
            mx_sum += i;
            temp_r--;
        }
    }

    mx_sum += ((n - r) * mx_arr.back());

    cout << min_sum << " " << mx_sum << endn;
}
// Solved By: shihab4t
// Saturday, July 24, 2021 | 12:37:59 AM (BST)
