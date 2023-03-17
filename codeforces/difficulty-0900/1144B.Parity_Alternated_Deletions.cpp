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
void print_vector(vector<tem> &vec)
{for (auto &ele : vec) cout << ele << " ";
cout << endn;}

int sum_vec(vector<int> &v) {
    int sum = 0;
    for (auto ele : v) {
        sum += ele;
    }
    return sum;
}

bool cmp(int a, int b) {
    return a > b;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n), odd_a, even_a;
    int deleted;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2)
            odd_a.pb(a[i]);
        else
            even_a.pb(a[i]);
    }

    sort(odd_a.begin(), odd_a.end(), cmp);
    sort(even_a.begin(), even_a.end(), cmp);

    if (odd_a.size() > even_a.size()) {
        deleted = odd_a.front();
        odd_a.erase(odd_a.begin());
    }
    else {
        deleted = even_a.front();
        even_a.erase(even_a.begin());
    }

    while (true) {
        if (deleted % 2) {
            if (even_a.size() == 0)
                break;
            deleted = even_a.front();
            even_a.erase(even_a.begin());
        }
        else {
            if (odd_a.size() == 0)
                break;
            deleted = odd_a.front();
            odd_a.erase(odd_a.begin());
        }
    }
    int sum = 0;
    sum += sum_vec(odd_a);
    sum += sum_vec(even_a);

    cout << sum << endn;
}
// Solved By: p-nerd
// Saturday, July 24, 2021 | 07:31:07 PM (+06)
