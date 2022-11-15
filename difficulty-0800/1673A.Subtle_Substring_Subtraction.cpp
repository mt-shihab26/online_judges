#include <bits/stdc++.h>
using namespace std;

template <typename T>
istream &operator>>(istream &istream, vector<T> &v)
{
    int len = v.size();
    for (int i = 0; i < len; i++)
        cin >> v[i];
    return istream;
}
template <typename T>
ostream &operator<<(ostream &ostream, const set<T> &s)
{
    for (auto ith : s)
        cout << ith << " ";
    return ostream;
}
template <typename T>
ostream &operator<<(ostream &ostream, const vector<T> &v)
{
    for (auto ith : v)
        cout << ith << " ";
    return ostream;
}
template <typename T, typename T2>
ostream &operator<<(ostream &ostream, const pair<T, T2> &p)
{
    return (ostream << p.first << " " << p.second);
}
template <typename T, typename T2>
ostream &operator<<(ostream &ostream, const map<T, T2> &mp)
{
    for (auto ith : mp)
        cout << ith << "\n";
    return ostream;
}

#define llint long long int
#define str string
#define vec vector
#define endn '\n'
#define test_cases \
    int t;         \
    cin >> t;      \
    while (t--)    \
        solve();

/* -------------------- solution start -------------------- */

void solve()
{
    string str;
    cin >> str;
    int len = str.length();

    int total_sum = 0;
    for (int i = 0; i < len; i++)
    {
        total_sum += (str[i] - 'a' + 1);
    }

    int a_len = len % 2 == 0 ? len : len - 1;
    int f_a_sum = 0, s_a_sum = 0;

    for (int i = 0, j = len - 1; i < a_len; i++, j--)
    {
        f_a_sum += (str[i] - 'a' + 1);
        s_a_sum += (str[j] - 'a' + 1);
    }

    int aliac_score;
    int bob_score;

    if (s_a_sum > f_a_sum)
    {
        aliac_score = s_a_sum;
        bob_score = total_sum - s_a_sum;
    }
    else
    {
        aliac_score = f_a_sum;
        bob_score = total_sum - f_a_sum;
    }

    if (aliac_score > bob_score)
    {
        cout << "Alice " << aliac_score - bob_score << endn;
    }
    else
    {
        cout << "Bob " << bob_score - aliac_score << endn;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test_cases;

    return 0;
}
// Shihab Mahamud (github.com/shh26b)
