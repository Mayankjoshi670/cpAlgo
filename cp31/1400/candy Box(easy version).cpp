#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n; 
    vector<int> x(n); 
    for(auto &it : x) cin >> it; 

    unordered_map<int, int> mpp; 
    for(auto it : x) {
        mpp[it]++; 
    }

    vector<int> res; 
    for(auto it  : mpp) {
     int    b = it.second ; 
        res.push_back(b); 
    }

    sort(rbegin(res), rend(res));   

    int ans = res[0];  
    int prev = res[0]; 
    for(int i = 1; i < res.size(); i++) {
        if(prev == 0) break; 
        if(res[i] >= prev) {
            res[i] = prev - 1;
        }

        ans += max(res[i], 0);
        prev = res[i]; 
    }

    cout << ans << endl;
}

int main() {
    int t; 
    cin >> t; 
    while(t-- > 0) {
        solve(); 
    }
}
