#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    
}

int32_t main() {
    fast_io;
    int n , total ; 
    cin>> n >> total ; 
    vi price(n) , pages(n) ; 
    for(auto & it : price)cin>> it ; 
    for(auto & it : pages)cin>> it ;      
        // findAns(); 
//         vector<int>dp(total+1 , 0 )  ; 
//    for(int i = 0 ; i< n ; i++){
//     for(int j = total ; j>=0 ; j--){
//         if(j >= price[i]){
//             dp[j]  = max(dp[j] , dp[j - price[i]]+ pages[i])  ; 
//         }
//     }
//    }
//         int ans = *max_element(begin(dp) , end(dp)) ; 
//         cout << ans << "\n" ;

vector<vector<int>>dp(n+1 , vector<int>(total+1 , 0 )) ; 
for(int i =   1 ; i<=  n ; i++){
    for(int j =0  ; j <= total; j++){
        //  not take 
        dp[i][j] = dp[i-1][j] ; 
// take 
if( j  >= price[i-1]){
    dp[i][j] = max(dp[i][j], pages[i-1] + dp[i-1][j - price[i-1]]);

}
    }
}
cout << dp[n][total] ; 
       
    return 0;
    
}
