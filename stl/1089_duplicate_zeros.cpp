#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> arr2;
        for (int i = 0; i < arr.size(); i++) {
            arr2.push_back(arr[i]);
            if (arr[i] == 0) {
                arr2.push_back(arr[i]);
            }
        }
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = arr2[i];
        }
    }
};