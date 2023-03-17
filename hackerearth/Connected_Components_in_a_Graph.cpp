#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> cc;
vector<int> current_cc;

void dfs(int vertex, vector<vector<int>> &graph, vector<bool> &vis)
{
    vis[vertex] = true;
    current_cc.push_back(vertex);
    for (int child : graph[vertex])
    {
        if (vis[child] == true)
            continue;
        dfs(child, graph, vis);
    }
}

int main()
{
    int v, e, i, n1, n2;
    cin >> v >> e;
    vector<vector<int>> graph(v + 1);
    vector<bool> vis(v + 1);
    for (i = 1; i <= e; i++)
    {
        cin >> n1 >> n2;
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }
    int ct = 0;
    for (int i = 1; i <= v; i++)
    {
        if (!vis[i])
        {
            current_cc.clear();
            dfs(i, graph, vis);
            cc.push_back(current_cc);
            ct++;
        }
    }
    cout << cc.size() << "\n";
    for (auto x : cc)
    {
        for (int y : x)
            cerr << y << " ";
        cerr << "\n";
    }
}