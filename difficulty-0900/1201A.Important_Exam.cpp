#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map

//Solve
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int len_n, len_m;
    cin >>len_n >>len_m;
    string m_ques[len_n];

    vector<umap<char, int>> max_ans_per(len_m);

    string ques;
    int j;
    for (int i = 0; i < len_n; i++) {
        cin >>ques;
        for (j = 0; j < len_m; j++) {
            max_ans_per[j][ques[j]]++; 
        }
        m_ques[i] = ques;
    }

    int points[len_m];
    for (int i = 0; i < len_m; i++) {
        cin >>points[i];
    }

    llint total = 0;

    for (int i = 0; i < len_m; i++) {
        auto it = max_ans_per[i].begin();
        pair<char, int> max = {it->first, it->second};
        for (it++ ; it != max_ans_per[i].end(); it++) {
            if (max.second < it->second) {
                max = {it->first, it->second};
            }
        }
        total += (max.second * points[i]);
    }

    cout <<total <<endn;

    return 0;
}
// Solved By: shh26b
// Friday, July 09, 2021 | 07:48:09 AM (+06)
