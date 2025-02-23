#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    int n, k  ; 
    cin>> n>> k  ;
    vi arr(n+1 , 0 ) ; 
    for(int i = 0 , u , v ; i < k; i++){
        cin>> u >> v ;
        if(u > v) swap(u , v) ;  
       arr[v] = max(u  , arr[v]) ;
    }
    int ans = 0 , maxPos = 0 ; 
    for(int i = 1 ; i<= n ; i++){
        maxPos = max(maxPos , arr[i]) ; 
        ans+= i - maxPos ; 
    }
    cout << ans << endl ; 
    return ; 
}

int32_t main() {
    fast_io;
        int t; 
        cin>> t ; 
        while(t-->0){
            findAns();
        } 
    
}

