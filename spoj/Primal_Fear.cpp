#include <bits/stdc++.h>
using namespace std;

#define endn "\n"

#define mx 1000000
bitset<mx> mark;
vector<int> primes;
void sieve()
{
    primes.push_back(2);
    int i, j;
    for (i = 3; i <= sqrt(int(mx)); i += 2)
        if (mark[i] == false)
        {
            primes.push_back(i);
            for (j = i * i; j <= mx; j += i * 2)
                mark[j] = true;
        }
    for (; i <= mx; i += 2)
        if (mark[i] == false)
            primes.push_back(i);
}

void test(void)
{
    int n;
    cin >> n;
    string temp;
    int ct = 0;
    for (int i = 0; primes[i] <= n; i++)
    {
        temp = to_string(primes[i]);
        if (temp.find('0') == string::npos)
        {
            ct++;
        }
    }
    cout << ct << endn;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        test();
    }
}
// Solved By: shihab4t
// Wednesday, July 14, 2021 | 09:22:52 AM (+06)
