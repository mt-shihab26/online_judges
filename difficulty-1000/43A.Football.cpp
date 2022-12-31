#include <bits/stdc++.h>
using namespace std;

#define endn "\n"

void test(void)
{
    int n;
    cin >> n;
    string tmp, one, other;
    int one_c = 1, other_c = 0;
    cin >> one;
    while (--n)
    {
        cin >> tmp;
        if (!tmp.compare(one))
        {
            one = tmp;
            one_c++;
        }
        else
        {
            other_c++;
            if (!other.size())
                other = tmp;
        }
    }
    // cout <<one_c <<" " <<other_c <<endn;
    if (one_c > other_c)
        cout << one << endn;
    else
        cout << other << endn;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test();
    return 0;
}
// Solved By: shihab4t
// Wednesday, June 16, 2021 | 01:53:21 AM (+06)
