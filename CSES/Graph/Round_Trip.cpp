#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long
#define int long long int

const int N = 1e5 + 5;
vector<int> arr[N];
bool vis[N];
int parent[N];
int n, m;

void printPath(int start, int end) {
    vi cycle;
    cycle.push_back(start);
    for (int curr = end; curr != start; curr = parent[curr]) {
        cycle.push_back(curr);
    }
    cycle.push_back(start);
    reverse(cycle.begin(), cycle.end());
    cout << cycle.size() << '\n';
    for (auto it : cycle) cout << it << " ";
    cout << '\n';
}

bool dfs(int node, int par) {
    vis[node] = 1;
    parent[node] = par;
    for (auto it : arr[node]) {
        if (it == par) continue; 
        if (vis[it]) {
            
            printPath(it, node);
            return true;
        } else {
            if (dfs(it, node)) return true;
        }
    }
    return false;
}

void findAns() {
    cin >> n >> m;
 
    for (int i = 1; i <= n; i++) {
        arr[i].clear();
        vis[i] = false;
        parent[i] = -1;
    }

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            if (dfs(i, -1)) {
                return;  
            }
        }
    }

    cout << "IMPOSSIBLE" << '\n';
}

int32_t main() {
    fast_io;
    findAns();
}
