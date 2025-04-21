#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int
int mod=1e9+7 , n = 4*1e4 ;
vi dp(n+1 , 0 ) ;
vi palindrome  ;  
void precompute(){
    dp[0] = 1  ; 
    for(int i = 1 ; i<= n ; i++){
       string s = to_string(i)  ; 
        if(string(s.rbegin() , s.rend()) == s)palindrome.push_back(i) ; 
    }
    //  coin change types 
    for(auto it : palindrome){
        for(int j = it ; j  <= n ; j++){
            dp[j] = (dp[j]+ dp[j-it])%mod ; 
        }
    }
} 
void findAns() {
    int n ; 
    cin>> n ; 
    cout << dp[n]<<'\n'  ; 
    return ; 
}

int32_t main() {
    fast_io;
    int t = 1 ;
    precompute() ;  
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
