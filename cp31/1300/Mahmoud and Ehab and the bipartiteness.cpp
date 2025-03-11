#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
const int sz = 1e5+1; 

vi adj[sz]; 
vi vis(sz, 0);   
int cnt[2]; 

void dfs(int node , int color) {
    vis[node] = 1;   
    cnt[color]++; 

    for(auto it : adj[node]) {
        if (!vis[it]) { 
            dfs(it , 1-color);
        }
    }
}

void findAns() {
    int n; 
    cin >> n;
 
    cnt[0] = cnt[1] = 0;
    for (int i = 0; i <= n; i++) {
        adj[i].clear();
        vis[i] = 0;
    }

    for(int i = 0; i < n-1; i++) {  
        int a, b; 
        cin >> a >> b;
        adj[a].push_back(b); 
        adj[b].push_back(a);
    }    

    dfs(1 , 0); 

    cout << 1LL * cnt[0] * cnt[1] - (n - 1) << '\n';
}

int32_t main() {
    fast_io;
    findAns();
}
