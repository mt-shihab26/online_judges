#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& inums, int target) {
        int i = 0, j = inums.size()-1;
        long long int sum;
        while (i < j) {
            sum = inums[i] + inums[j];
            if (sum == target) return {i+1, j+1};
            else if (sum > target) j--;
            else i++;
        }
        return {-1, -1};
    }
};

int main() {
    
}
