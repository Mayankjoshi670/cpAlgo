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
    vector<pair<int , int>>vpp ;
    for(int i = 0 ; i< n ; i++){
        int x  ; 
        cin>> x  ; 
        vpp.push_back({x,i}) ; 
    }
    sort(vpp.begin(),vpp.end()) ;
    for(int i = 0 ; i< n ; i++){
        int a = vpp[i].first ; 
        int b = vpp[i].second ;
        int setBitsA = __builtin_popcount(a)  ; 
        int setBitsB = __builtin_popcount(vpp[b].first) ;
        if(setBitsA != setBitsB){
        cout << "NO"<<endl ; 
        return ; 
        }
    }
    cout << "YES" << endl ; 
    
    return ;
}

int32_t main() {
    fast_io;
    int t ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
