#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long  

void findAns() {
    int n; 
    cin >> n;
    vi a(n); 
    for (auto &it : a) cin >> it; 

    vector<vector<int>> b(n + 1); 
    for (int i = 0; i < n; i++) {
        int no = a[i];      
        b[no].push_back(i); 
    }

    vector<pair<int, int>> range; 
    for (int i = 0; i <= n; i++) {
        if (b[i].size() > 1) {
            range.push_back({b[i][0], b[i].back()}); 
        }
    }

    vi points(n, 0); 
    for (auto x : range) {
        points[x.first] = 1; 
        points[x.second] = 2; 
    }

    int cnt = 0; 
    int ans = 0; 
    for (int i = 0; i < n; i++) {
        if (points[i] == 1) {
            cnt++; 
            ans++ ; 
        } else if (points[i] == 2) {
            cnt--; 
            ans++; 
        } else {
            if (cnt  ) ans++; 
        }
    }

    sort(begin(a), end(a)); 
    int unq = unique(a.begin(), a.end()) - a.begin(); 
    cout << ans - (n - unq) << endl; 
}

int32_t main() {
    fast_io;
    int t; 
    cin >> t;
    while (t-- > 0) {
        findAns();
    }     
}
