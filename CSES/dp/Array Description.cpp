#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
#define mod 1000000007
int32_t main() {
    fast_io;
     int n  , x ; 
     cin>> n >> x ; 
     vi arr(n) ; 
     for(auto & it  : arr)cin>> it ; 
        // findAns(n , x , arr , 0 );
    
    vector<vector<int>>dp(n , vector<int>(x+2 , 0 )) ; 
  

        for(int i = 0 ; i< n ; i++){
            if( i == 0 ){
                if(arr[i] == 0 ){
                    for(int j = 1 ; j <=x ; j++){
                        dp[i][j] = 1 ;
                    }
                }
                else{
                    dp[i][arr[i]] = 1 ;  
                }
            }
            else {
                if(arr[i] == 0 ){
                    for(int j = 1 ; j <= x ; j++){
                        dp[i][j] = (dp[i-1][j-1]+dp[i-1][j]+dp[i-1][j+1])%mod  ;
                    }
                }
                else {
                    dp[i][arr[i]] = (dp[i-1][arr[i]]+dp[i-1][arr[i]+1]+dp[i-1][arr[i]-1])%mod;  
                    
                }
            }
        }
        int  ans = 0 ; 
        for(int i = 1; i<= x; i++){
            ans= (ans+ dp[n-1][i])%mod  ; 
        }
        cout << ans << "\n";
    return 0;
}
