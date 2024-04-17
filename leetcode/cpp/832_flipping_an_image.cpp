#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto &ith: image)  {
            reverse(ith.begin(), ith.end());
            for (int &jth : ith) {
                jth = !jth;
            }
        }
        return image;
    }
};