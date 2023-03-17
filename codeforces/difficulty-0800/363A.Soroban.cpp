#include <bits/stdc++.h>
using namespace std;

#define ed '\n';
#define gp ' ';

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, digit, first_p, next_p, i;
    string str;
    cin >> n;

    bool flag = false;
    if (n == 0)
        flag = true;

    while (n || flag)
    {
        digit = n % 10;

        next_p = digit % 5;
        first_p = digit - next_p;

        str = first_p == 5 ? "-O" : "O-";

        str += '|';
        for (i = 1; i <= next_p; i++)
            str += "O";
        str += "-";
        for (; i <= 4; i++)
            str += "O";

        cout << str << ed;

        n /= 10;
        flag = false;
    }
}