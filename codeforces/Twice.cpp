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
    map<int, int>mpp ; 
    for(int i = 0 ; i< n  ; i++){
        int no ; 
        cin>> no ; 
        mpp[no]++  ; 
    }
    int ans = 0 ; 
    for(auto it : mpp){
       ans += (it.second/2) ; 
    }
    cout << ans << '\n' ; 
}

int32_t main() {
    fast_io;
     int t ; 
     cin>>t ; 
     while(t-->0){
        findAns();
     }
    
}