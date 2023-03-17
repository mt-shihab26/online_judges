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
    string str;
    cin >> str;
    for (int i = 0, j = str.size() - 1; i < (int)str.size() / 2; i++, j--)
    {
        if (str[i] != str[j])
        {
            cout << "NO" << endn;
            return;
        }
    }
    cout << "YES" << endn;
}

int main(void)
{
    test();
    return 0;
}
// shihab4t
// Date: Tuesday, June 08, 2021 | 08:39:52 AM (+06)
