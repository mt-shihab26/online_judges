#include <bits/stdc++.h>
using namespace std;

#define endn "\n"

#define mx 100000000
bitset<mx> mark;
vector<int> primes;
void sieve(void)
{
    int i, j;
    primes.push_back(2);
    int root = sqrt(int(mx));
    for (i = 3; i <= root; i += 2)
    {
        if (mark[i] == false)
        {
            primes.push_back(i);
            for (j = i * i; j <= mx; j += 2 * i)
            {
                mark[j] = true;
            }
        }
    }
    for (; i <= mx; i += 2)
    {
        if (mark[i] == false)
        {
            primes.push_back(i);
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve();
    for (int i = 0; i < primes.size(); i += 100)
    {
        cout << primes[i] << endn;
    }
}
// Solved By: shihab4t
// Wednesday, July 14, 2021 | 01:42:10 AM (+06)
