#include <bits/stdc++.h>
using namespace std;

bool is_vowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string st;
    getline(cin, st);

    for (int i = st.length() - 1; i >= 0; i--)
    {
        if ((st[i] >= 'a' && st[i] <= 'z') || (st[i] >= 'A' && st[i] <= 'Z'))
        {
            if (is_vowel(st[i]))
            {
                cout << "YES" << '\n';
                return 0;
            }
            else
            {
                cout << "NO" << '\n';
                return 0;
            }
        }
    }
    cout << "NO" << '\n';
}