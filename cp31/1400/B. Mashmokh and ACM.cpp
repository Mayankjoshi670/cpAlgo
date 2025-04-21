#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
const int MOD = 1000000007;


void findAns() {
    int n, k;
    cin >> n >> k;
    vvi dp(k + 1, vi(n + 1, 0));
    
    for (int i = 1; i <= n; i++) {
        dp[1][i] = 1;
    }

    for (int i = 2; i <= k; i++) {
        for (int j = 1; j <= n; j++) {
            for (int m = j; m <= n; m += j) {
                dp[i][m] = (dp[i][m] + dp[i - 1][j]) % MOD;
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = (ans + dp[k][i]) % MOD;
    }

    cout << ans;
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    // cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
