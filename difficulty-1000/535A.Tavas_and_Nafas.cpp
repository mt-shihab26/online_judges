#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define endn "\n"

void inilized(string akk[])
{
    akk[0] = "zero", akk[1] = "one";
    akk[2] = "two", akk[3] = "three";
    akk[4] = "four", akk[5] = "five";
    akk[6] = "six", akk[7] = "seven";
    akk[8] = "eight", akk[9] = "nine";
    akk[10] = "ten", akk[11] = "eleven";
    akk[12] = "twelve", akk[13] = "thirteen";
    akk[14] = "fourteen", akk[15] = "fifteen";
    akk[16] = "sixteen", akk[17] = "seventeen";
    akk[18] = "eighteen", akk[19] = "nineteen";
    akk[20] = "twenty";
    akk[30] = "thirty";
    akk[40] = "forty", akk[50] = "fifty";
    akk[60] = "sixty", akk[70] = "seventy";
    akk[80] = "eighty", akk[90] = "ninety";
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >> num;

    string akk[100];
    inilized(akk);
    string ans;

    if (num <= 20)
    {
        ans = akk[num];
    }
    else if (num % 10 == 0)
    {
        ans = akk[num];
    }
    else
    {
        int last = num % 10;
        ans = akk[num - last];
        ans += "-" + akk[last];
    }

    cout << ans << endn;

    return 0;
}
// Solved By: shh26b
// Tuesday, June 29, 2021 | 12:22:13 AM (+06)
