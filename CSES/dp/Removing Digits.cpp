#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns(int n , vi & dp ) {
    for(int i = 1 ; i<= n ; i++){
        string s = to_string(i) ; 
        for(int  j = 0 ; j < s.size() ; j++){
           int x = s[j]-'0' ; 
            dp[i] = min(dp[i] , dp[i-x]+1) ; 
        }
    }
    cout << dp[n] ; 
}

int32_t main() {
    fast_io;
    int n ; 
    cin>> n ; 
    vector<int>dp(n+1 ,INT_MAX) ; 
    if(n < 9 ){
        cout << 1 ; 
        return 0  ; 
    }     
    dp[0] = 0 ; 
        // findAns(n , dp );
       int cnt = 0 ; 
        while(n >9){
            string s = to_string(n) ; 
           char c = *max_element(s.begin() , s.end()) ; 
           n-= (c-'0') ; 
           cnt++ ; 
        }
        cout << cnt+1 << endl ; 
    
}
