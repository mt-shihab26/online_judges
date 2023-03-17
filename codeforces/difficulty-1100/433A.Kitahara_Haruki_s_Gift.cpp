#include <bits/stdc++.h>
using namespace std;

#define endn "\n"

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int hen = 0, tw_hen = 0, tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp == 100)
            hen++;
        else
            tw_hen++;
    }
    if (hen % 2)
        cout << "NO";
    else if (hen == 0 && tw_hen % 2)
        cout << "NO";
    else
        cout << "YES";
    cout << endn;
}
// Solved By: p-nerd
// Monday, August 02, 2021 |  8:27:51 AM (BST)
