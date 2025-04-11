#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    int n , m  , k ;
    cin>> n>> m >>  k  ; 
    vi given(n) ; 
    for(auto & it : given)cin>> it  ; 
    vi temp ; 
    for(int i = 1 ; i< n; i++){
        temp.push_back(given[i]-given[i-1]) ;  
    }
    sort(begin(temp) , end(temp)) ; 
    int till = n-k  ; 
    int ans = accumulate(begin(temp) , begin(temp)+ till , 0LL) ; 
    cout << ans+k<<'\n' ; 
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    // cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
