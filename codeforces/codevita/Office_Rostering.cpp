#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
#define vpi vector<pair<int, int>>
#define vb vector<bool>

void findAns() {
    int n, m; 
    cin >> n >> m;
    vpi arr(m);
    for (int i = 0; i < m; i++) {
        int u, v; 
        cin >> u >> v; 
        arr[i] = {u, v}; 
    }
    int t; 
    cin >> t;

    vvi graph(n);
    for (auto it : arr) {
        graph[it.first].push_back(it.second); 
        graph[it.second].push_back(it.first);
    }

    vb a(n, true), b(n, false); 
    int ans = 1, x = n;

    while (x < t) {
        int cnt = 0; 
        for (int i = 0; i < n; i++) {
            int odd = 0; 
            for (auto it : graph[i]) {
                if (a[it]) odd++; 
            }
            if (a[i] && odd == 3) {
                b[i] = true;
            } else if (!a[i] && odd < 3) {
                b[i] = true;
            } else {
                b[i] = false;
            }
            if (b[i]) {
                cnt++;
            }
        }
        a = b; 
        x += cnt; 
        ans++; 
    }
    cout << ans;
}

int32_t main() {
    fast_io;
    findAns();
}
