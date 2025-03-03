#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
const int MOD = 1e9 + 7;
int findAns(vector<vector<char>>&inpt  , int n , vvi & dp ) {
   for(int i = n-1 ; i >= 0 ; i--){
    for(int j = n-1 ; j>= 0 ; j--){
        if(inpt[i][j] == '*'){
            dp[i][j] = 0 ;
        }
        else{
        int up = (i+1 < n) ? dp[i+1][j] : 0  ; 
        int left = (j+1 < n) ? dp[i][j+1] : 0  ;
            dp[i][j] += (up+ left)%MOD ; 
        }
    }
   } return dp[0][0] ; 
}

int32_t main() {
    fast_io;
int n ; 
cin>> n ;
vector<vector<char>>inpt(n , vector<char>(n , ' ')) ;  
for(int i = 0 ; i< n  ; i++){
    for(int j = 0 ; j < n; j++){
        cin>> inpt[i][j] ; 
    }
}     

vvi dp(n , vi(n , 0 )) ;
dp[n-1][n-1] = 1 ; 
       cout <<  findAns( inpt ,n , dp);
    // cout << endl ; 
    // for(int i = 0 ; i< n ; i++){
    //     for(int j = 0 ; j < n ; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl ;  
    // }
}
