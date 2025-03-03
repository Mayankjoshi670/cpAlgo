// #include<bits/stdc++.h>
// using namespace std;
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// #define vi vector<int>
// #define vvi vector<vector<int>>
// #define ll long long 
// #define int long long int 
// #define MOD 1000000007 
// void findAns() {
// int n ; 
// cin>> n ; 

// vvi dp(n , vi(2 , 0 )) ; 
// dp[n-1][0]=1 ; 
// //  2 block
// dp[n-1][1] = 1 ;
// //  1  block
// for(int i = n-2 ; i>= 0 ; i--){
//     dp[i][0] = ((4*dp[i+1][0])%MOD+ dp[i+1][1])%MOD ; 
//     dp[i][1] = ((2*dp[i+1][1])%MOD + dp[i+1][0])%MOD ; 
// } 
// cout << (dp[0][0]+ dp[0][1])%MOD<<'\n' ; 
// }

// int32_t main() {
//     fast_io;
//     int t = 1 ; 
//     cin>> t ; 
//     while(t-->0){
//         findAns();
//     }     
    
// }
 
//  the code will give tle because 
// The issue is that you're creating a new DP table for 
// every test case, which results in redundant recalculations. 
// Instead, we should preprocess the  DP array once for 
// the maximum n across all test cases, and then simply 
// print the results for each test case in constant time.

#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
const int sz = 1e6+2 ; 
int cache[sz][2]   ; 
#define MOD 1000000007

int32_t main() {
    fast_io;
    cache[0][0] = 1 ;
    //  2 part 
    cache[0][1] =1 ; 
    //  one part  
    for(int i =1 ; i<= sz ; i++){
        cache[i][0] = ((4*cache[i-1][0])%MOD + cache[i-1][1])%MOD ; 
        cache[i][1] = ((2*cache[i-1][1])%MOD+ cache[i-1][0])%MOD ; 
    }
    int t ; 
    cin>> t; 
    while(t--){
        int n ; 
        cin>> n ;
        cout << (cache[n-1][0]+ cache[n-1][1])%MOD<<'\n' ;
    }
}
