#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long
#define int long long int
#define pb push_back

int n, m;
vector<vector<int>> arr;
vector<int> vis;

bool bfs(int start) {
    vis[start] = 0;
    queue<pair<int, int>> q;
    q.push({start, 0});
    while (!q.empty()) {
        int node = q.front().first;
        int parity = q.front().second;
        q.pop();
        for (auto it : arr[node]) {
            if (vis[it] == -1) {
                vis[it] = 1 - parity;
                q.push({it, 1 - parity});
            } else if (vis[it] == parity) {
                return false;
            }
        }
    }
    return true;
}

void findAns() {
    cin >> n >> m;
    arr.resize(n + 1);
    vis.assign(n + 1, -1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        arr[a].pb(b);
        arr[b].pb(a);
    }
    for (int i = 1; i <= n; i++) {
        if (vis[i] == -1) {
            if (!bfs(i)) {
                cout << "IMPOSSIBLE" << '\n';
                return;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << (vis[i] + 1) << " ";
    }
    cout << '\n';
}

int32_t main() {
    fast_io;
    findAns();
}
