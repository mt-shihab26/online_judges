#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set
#define pb push_back
template <typename tem>
void print_vector(vector<tem> &vec)
{
    for (auto &ele : vec)
        cout << ele << " ";
    cout << "\n";
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    string direc;
    cin >> direc;
    int ans = 0;
    for (int i = 0; i < direc.length(); i++)
    {
        if (sx == ex && sy == ey)
            break;
        if (direc[i] == 'E' && ex > sx)
            sx++;
        else if (direc[i] == 'S' && ey < sy)
            sy--;
        else if (direc[i] == 'W' && ex < sx)
            sx--;
        else if (direc[i] == 'N' && ey > sy)
            sy++;
        ans++;
    }
    if (sx != ex || sy != ey)
        ans = -1;
    cout << ans << endn;
}
// Solved By: shh26b
// Sunday, August 01, 2021 | 05:15:29 PM (+06)
