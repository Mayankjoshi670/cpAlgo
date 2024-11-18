#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvs vector<vector<char>>
#define vs vector<char>
#define ll long long 
#define int long long int 

int drow[4] = {-1, 0, 1, 0}; 
int dcol[4] = {0, 1, 0, -1}; 

void dfs(vvs &arr, int i, int j, vvi &vis, int n, int m) {
    queue<pair<int, int>> q; 
    q.push({i, j}); 
    vis[i][j] = 1; 
    while (!q.empty()) {
        int r = q.front().first; 
        int c = q.front().second;  
        q.pop(); 
        for (int dir = 0; dir < 4; dir++) {
            int nrow = r + drow[dir]; 
            int ncol = c + dcol[dir]; 
            if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && 
                !vis[nrow][ncol] && arr[nrow][ncol] == '.') {
                q.push({nrow, ncol}); 
                vis[nrow][ncol] = 1; 
            }
        }
    }
}

void findAns() {
    int n, m; 
    cin >> n >> m; 
    vvs arr(n, vs(m)); 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j]; 
        }
    }    

    int cnt = 0;
    vvi vis(n, vi(m, 0));  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j] && arr[i][j] == '.') {
                dfs(arr, i, j, vis, n, m);
                cnt++; 
            }
        }
    }
    cout << cnt; 
}

int32_t main() {
    fast_io;
    findAns();
    return 0;
}
