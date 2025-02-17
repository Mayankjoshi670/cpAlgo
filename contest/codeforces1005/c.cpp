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
    vi pre(n+1 , 0 ) , suff(n+1 , 0 ) ; 
    vi arr(n) ; 
    for(auto & it : arr)cin>> it ; 
    for(int i = 0 ; i< n ; i++){
        pre[i+1] = pre[i] + max(0LL , arr[i]) ;  
    }

    
    for(int i = n-1 ; i >= 0  ; i--){
        suff[i] = suff[i+1] + max(0LL , - arr[i])  ; 
    }
    int ans = 0 ; 
    for(int i = 0; i<= n ; i++){
        ans = max(ans , pre[i] + suff[i]) ; 
    }
    cout << ans << endl;
    return ; 
}

int32_t main() {
    fast_io;
    int t; 
    cin>> t; 
    while(t-->0){
        findAns();
    }     
    
}
