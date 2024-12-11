#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

// Using DFS for topological sort
void dfs(int src, vvi &grid, stack<int> &st, vi &vis) {
    vis[src] = 1;
    for (auto node : grid[src]) {
        if (!vis[node]) {
            dfs(node, grid, st, vis);
        }
    }
    st.push(src);
}

void topoSort(vvi &grid, int n) {
    stack<int> st;
    vi vis(n, 0);

    // DFS-based Topological Sort
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            dfs(i, grid, st, vis);
        }
    }

    // Print the result
    cout << "Using DFS Topological Sort:\n";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << '\n';

    // Kahn's Algorithm for Topological Sort
    vi indegree(n, 0);
    for (int i = 0; i < n; i++) {
        for (auto it : grid[i]) {
            indegree[it]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < n; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    vi res;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        res.push_back(node);
        for (auto it : grid[node]) {
            indegree[it]--;
            if (indegree[it] == 0) {
                q.push(it);
            }
        }
    }

    // Print the result
    cout << "Using Kahn's Algorithm:\n";
    for (auto it : res) {
        cout << it << " ";
    }
    cout << '\n';
}

int32_t main() {
    fast_io;
    int n, t;
    cin >> n >> t;
    vvi grid(n);
    while (t-- > 0) {
        int a, b;
        cin >> a >> b;
        grid[a].push_back(b);
    }
    topoSort(grid, n);
}
