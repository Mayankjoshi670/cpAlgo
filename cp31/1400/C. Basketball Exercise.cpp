#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
int n ; 
cin>> n ; 
vi h1(n) , h2(n) ; 
for(auto & it : h1)cin>> it  ;
for(auto & it : h2)cin>> it  ;

vvi dp(n+1 , vi(2 , 0 )) ; 
dp[0][0] = h1[0] ; 
dp[0][1] = h2[0] ; 

for(int i = 1 ; i < n ; i++){
    dp[i][1] = max(dp[i-1][1] , dp[i-1][0] + h2[i]) ; 
    dp[i][0] = max(dp[i-1][0] , dp[i-1][1]+ h1[i]) ; 
}
cout << max(dp[n-1][0]  , dp[n-1][1])<< endl  ; 
return  ; 
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    // cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
