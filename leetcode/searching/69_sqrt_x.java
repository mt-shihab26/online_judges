class Solution {
    public int mySqrt(int x) {
        if (x <= 1)
            return x;
        long low = 1, high = x, mid, ans = 0;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (mid * mid <= x) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return (int) ans;
    }
}