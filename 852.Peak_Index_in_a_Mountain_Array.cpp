#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int n = arr.size();
        int low = 0, high = n - 1, mid;
        while (low < high)
        {
            mid = low + (high - low) / 2;
            if (arr[mid] > arr[mid + 1])
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
// Shihab Mahamud (github.com/shihab4t)
// Monday, June 27, 2022 | 03:00:35 PM (+06)
