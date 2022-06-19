#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define endn "\n"

// // Not
// void test_0(void) {
//     int len;
//     cin >>len;
//     int nums[len];
//     for (int i = 0; i < len; i++) {
//         cin >>nums[i];
//     }

    
//     int i, j, sum, mul;
//     int ct = 0;
//     for (i = 0; i < len; i++) {
//         for (j = i+1; j < len; j++) {
//             mul = nums[i] * nums[j];
//             sum = i+1 + j+1;
//             if (mul == sum) {
//                 ct++;
//             }

//         }
//     }
//     cout <<ct;
//     cout <<endn;
// }


void test(void) {
    int len;
    cin >>len;
    lli nums[len+1];
    for (int i = 1; i < len + 1; i++) {
        cin >>nums[i];
    }

    int i, j, ct = 0;
    for (i = 1; i <= len; i++) {
        
        for (j = nums[i] - i; j <= len; j += nums[i]) {
            if (j >= 0) {
                    if (nums[i]*nums[j] == i+j and i < j) {
                    ct++;
                }
            }
            
        }
    }
    cout <<ct <<endn;
}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int t;
    cin >>t;
    while (t--)
        test();

    return 0;
}
// Solved By: shihab4t
// Saturday, June 26, 2021 | 09:03:42 PM (+06)
