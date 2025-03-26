#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
#define um unordered_map<int, int > 
void findAns() {
    int n;
    cin >> n;
    vi arr(n)  ;
    for(auto & it : arr)cin>> it ;  

    vi  dp(n + 1, 0);
    um ans;
    
    for (int i = n - 1; i >= 0; i--) {
        dp[i] = 1 + dp[i + 1];
        if (ans.find(arr[i]) != ans.end()) {
            dp[i] = min(dp[i], ans[arr[i]]);
        }
        ans[arr[i]] = dp[i];
    }
    
    cout << dp[0] << "\n";
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}