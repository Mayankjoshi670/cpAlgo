#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define int long long int
#define mod 1000000007 
 const int sz = 1e6+1  ; 
 vi cache(sz , -1 ) ; 
int findWays(vi &coins, int n, int x) {
    if (x == 0) return 1;
    if ( x < 0) return 0;
    if( cache[x] != -1) return cache[x] ; 
    int take = 0   ; 
    for(int i = 0 ; i< n ; i++){
          take+=  findWays(coins, n, x - coins[i]);  
    }

    return cache[x] =  take ;
}

int32_t main() {
    fast_io;
    int n, x;
    cin >> n >> x;
    vi coins(n);
    for (auto &c : coins) cin >> c;

    // cout << findWays(coins, n, x);
    vi dp(x+1 , 0) ; 
    dp[0] = 1 ; 
    for(int i = 1 ; i <= x ; i++){
        for(int j = 0 ; j< n ; j++){
            if(coins[j]> i ) continue; 
            dp[i] = (dp[i]+ dp[i- coins[j]])%mod  ; 
        }
    }
    
    cout <<  dp[x] ; 

 
}