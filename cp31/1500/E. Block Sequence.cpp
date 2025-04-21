#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define int long long

int solve(int idx, int n, vi &given, int cnt , vi &dp ) {
    if (idx >= n) return 0;
    if(dp[idx]!= -1) return dp[idx] ; 
    int x = given[idx];
    int next_idx = idx + x + 1;

    int op1 = LLONG_MAX;
 
    if (next_idx <= n) {
        op1 = solve(next_idx, n, given, cnt , dp );
    }
 
    int op2 = 1+solve(idx + 1, n, given, cnt + 1 , dp );

    return dp[idx] =  min(op1, op2);
}

void findAns() {
    int n;
    cin >> n;
    vi given(n);
    for (auto &it : given) cin >> it;
    // vi dp(n, -1) ; 
    // int ans = solve(0, n, given, 0 , dp );

    vi dp(n+1 , 0 ) ; 
    for(int i = n-1 ; i>=0   ; i--){
        int x = given[i] ; 
        int nextIdx = i+x +1 ; 
        int take = (nextIdx<= n)? dp[nextIdx]: LLONG_MAX ; 
        int notTake = 1+dp[i+1] ;
        dp[i]  = min(take , notTake) ; 
    }
    cout << dp[0] << '\n';
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t-- > 0) {
        findAns();
    }
}
