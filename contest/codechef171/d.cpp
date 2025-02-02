 #include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 


void findAns() {
    int n, p; 
    cin >> n >> p; 
    vi a(n); 
    for (auto &it : a) cin >> it; 
    
    vi vis(n, 0); 
    vi ans(n, 0); 
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; 
    
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            pq.push({0, i}); 
            vis[i] = 1;
            ans[i] = 0;
        }
    }

    while (!pq.empty()) { 
      int w = pq.top().first ; 
      int idx = pq.top().second ; 
        pq.pop(); 
        
        if (idx - 1 >= 0) {
            if (w >= a[idx - 1] && !vis[idx - 1]) {
                vis[idx - 1] = 1; 
                pq.push({w, idx - 1}); 
                ans[idx - 1] = ans[idx] + p;
            }
             else {
                pq.push({w + p, idx}); 
            }
        }
        
        if (idx + 1 < n) {
            if (w >= a[idx + 1] && !vis[idx + 1]) {
                vis[idx + 1] = 1;
                pq.push({w, idx + 1}); 
                ans[idx + 1] = ans[idx] + p;
            }
             else {
                pq.push({w + p, idx}); 
            }
        }
    }
    
    for (auto it : ans) {
        cout << it << " ";  
    }
    cout << endl; 
}

int32_t main() {
    fast_io;
    int t; 
    cin >> t; 
    while (t-- > 0) {
        findAns();
    }
}