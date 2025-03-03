#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
const int sz = 1e6+1  ; 
vi cache(sz , -1) ; 
int  findAns(vi & arr , int n , int x ) {
    if(x == 0 ) return 0 ; 
    else if( x < 0 ) return INT_MAX ;
    if(cache[x]!= -1 ) return cache[x] ;  
    int ans = INT_MAX  ; 
    for(int i = 0 ; i< n ; i++){
        ans = min( ans , 1 +  findAns(arr , n , x - arr[i]))   ; 
    }
    return cache[x] =  ans ; 
}


int32_t main() {
    fast_io;
    int n , x  ; 
    cin>> n >> x ; 
vi arr(n) ; 
for(auto & it  : arr)cin>> it ;      
    // int res =     findAns( arr , n , x );
    //     cout << (res == INT_MAX?-1  :res) ; 
    vi dp(x+1 , INT_MAX) ;
    dp[0] = 0 ; 
    for(int i = 1; i <= x ; i++){
        for(int j  = 0 ; j < n ; j++){
          if(arr[j] > i || dp[i-arr[j]] == INT_MAX) continue; 
          dp[i] = min(dp[i] , dp[i-arr[j]]+1) ;   
        }
    } 
    if(dp[x]!= INT_MAX) cout << dp[x] ;
     else cout << -1 ;  

}
