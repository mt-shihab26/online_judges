#include <bits/stdc++.h>
using namespace std;
// Macros
typedef long long int lli;
typedef long double ld;
#define endn "\n"
// Functions
// print vector all element in one line
template <typename T>
inline void print_vector(vector<T> &vac)
{
    for (int ele : vac)
        cout << ele << " ";
    cout << endn;
}

// Solve
void test(void)
{
    int len;
    cin >> len;
    long sum = 1, num;
    long modulo = 1000000007;
    while (len--)
    {
        cin >> num;
        sum *= num;
        sum %= modulo;
    }
    cout << sum << endn;
}

int main(void)
{
    test();
    return 0;
}
// shihab4t
// Date: Tuesday, June 08, 2021 | 07:48:28 AM (+06)
