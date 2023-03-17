#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int mod = 1e9 + 7;
const int inf = 1e9;

int m, ans = 0;
vec<vec<int>> graph;
vec<bool> cats;
vector<bool> vis;

int solve();
void dfs(int, int);

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cerr << boolalpha;
    cout << boolalpha;

    solve();

    return 0;
}

int solve()
{
    int n, i, x, y, tmp;
    cin >> n >> m;

    graph.resize(n + 1);
    vis.resize(n + 1);
    cats.resize(n + 1);

    for (i = 0; i < n; i++)
    {
        cin >> tmp;
        cats[i] = tmp;
    }

    for (i = 0; i < n - 1; i++)
    {
        cin >> x >> y;
        graph[x - 1].push_back(y - 1);
        graph[y - 1].push_back(x - 1);
    }

    dfs(0, 0);

    cout << ans << ed;

    return 1;
}

void dfs(int node, int ct)
{
    ct = cats[node] ? ct + 1 : 0;
    if (ct > m)
        return;

    vis[node] = true;
    bool is_leaf = true;
    for (int child : graph[node])
    {
        if (!vis[child])
        {
            dfs(child, ct);
            is_leaf = false;
        }
    }
    if (is_leaf) ans++;
}

// github.com/p-nerd (Shihab Mahamud)
// Start: Friday, January 13, 2023 | 10:20:37 AM (+06)
// Break: Friday, January 13, 2023 | 11:43:59 AM (+06)
