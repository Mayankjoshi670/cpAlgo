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
vi input(n) ; 
for(auto & it : input)cin>> it ; 
vvi dp(n+1 , vi (2 , 0 )) ; 
if(input[0] >  0 )dp[0][0] = 1 ;
else dp[0][1] = 1 ; 
 
for(int i = 1 ; i< n ; i++){
    if(input[i] > 0){
    dp[i][0] = 1+ dp[i-1][0] ; 
    dp[i][1] = dp[i-1][1]  ;
    }
    else {
        dp[i][0] =  dp[i-1][1] ; 
        dp[i][1] = dp[i-1][0]+1 ; 
    }
} 
int pos = 0  , neg = 0 ; 
for(int i = 0 ; i< n ; i++){
    pos+= dp[i][0]  ; 
    neg += dp[i][1] ; 
}
cout << neg << " "<< pos << endl  ; 
}

int32_t main() {
    fast_io;
     
        findAns();
    
}
