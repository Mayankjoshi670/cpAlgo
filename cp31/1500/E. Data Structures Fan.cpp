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
    vi given(n)  ;
    unordered_map<int , vector<int>>mpp ; 
    for(int i = 0 ; i< n; i++){
        int no ; 
        cin>> no ; 
        mpp[no].push_back(i) ;
        given[i] = no ; 
    }
    
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
