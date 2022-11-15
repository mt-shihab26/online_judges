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
    int num;
    cin >> num;
    if (num % 2)
    {
        cout << 0 << endn;
    }
    else
    {
        if (num % 4 == 0)
        {
            num = (num / 4) - 1;
        }
        else
        {
            num = num / 4;
        }
        cout << num << endn;
    }
}

int main(void)
{
    test();
    return 0;
}
// shh26b
// Date: Tuesday, June 08, 2021 | 08:20:37 AM (+06)
