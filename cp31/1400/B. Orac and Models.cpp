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
    vi given(n) ; 
    for(auto & it : given )cin>> it ;
    
    vi dp(n+1 , 1 ) ; 
    dp[0] = 0 ; 
    for(int i = 1 ; i<= n ; i++){
        for(int j =2*i ; j<= n ; j+= i ){
            if(given[j-1]> given[i-1]){
                dp[j] = max(dp[j] , dp[i]+1) ; 
            }
        }
    }
    cout << *max_element(begin(dp) , end(dp))<<'\n'; 
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
