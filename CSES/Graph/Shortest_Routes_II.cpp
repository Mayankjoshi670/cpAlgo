#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    int n, m, q; 
    cin >> n >> m >> q; 
    vvi dis(n + 1, vi(n + 1, LLONG_MAX)); 
    for (int i = 1; i <= n; i++) 
        dis[i][i] = 0;
    for (int i = 0; i < m; i++) {
        int a, b, c; 
        cin >> a >> b >> c; 
        dis[a][b] = min(dis[a][b], c); 
        dis[b][a] = min(dis[b][a], c); 
    }
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (dis[i][k] < LLONG_MAX && dis[k][j] < LLONG_MAX)
                    dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]); 
            }
        }
    }
    while (q-- > 0) {
        int x, y; 
        cin >> x >> y; 
        cout << (dis[x][y] == LLONG_MAX ? -1 : dis[x][y]) << endl;
    }
}
int32_t main() {
    fast_io;
    findAns();
}
