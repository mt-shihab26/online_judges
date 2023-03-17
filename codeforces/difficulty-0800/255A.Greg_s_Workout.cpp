#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int chest = 0, biceps = 0, back = 0;

    if (n == 1)
        chest += a[0];
    else if (n == 2)
    {
        chest += a[0];
        biceps += a[1];
    }
    else
    {
        int last = n - n % 3;
        cerr << last << '\n';
        int left = n - last, i;
        for (i = 0; i < last; i += 3)
        {
            chest += a[i];
            biceps += a[i + 1];
            back += a[i + 2];
        }
        if (left == 1)
        {
            chest += a[i];
        }
        else if (left == 2)
        {
            chest += a[i];
            biceps += a[i+1];
        }
    }

    cerr << chest << " " << biceps << " " << back << "\n";

    if (chest > biceps && chest > back)
    {
        cout << "chest\n";
        return 0;
    }
    if (biceps > chest && biceps > back)
    {
        cout << "biceps\n";
        return 0;
    }
    if (back > chest && back > biceps)
    {
        cout << "back\n";
        return 0;
    }
}