#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    int n , m ; 
    cin>> n >> m ; 
    vi cnt(n+1) ; 
    for(int i = 0 ; i< m ; i++){
        int  u , v ; 
        cin>>  u >> v ; 
        cnt[u]++ ; 
        cnt[v]++ ; 
    }
    unordered_map<int , int>mpp ; 
    // for(auto it : cnt){
    for(int i = 1; i<= n  ; i++){
        mpp[cnt[i]]++ ; 
    }
    vi temp ; 
    for(auto it : mpp){
        temp.push_back(it.second) ; 
    }
    sort(begin(temp) , end(temp)) ; 
    if(temp.size() == 3){
        //  1 4 5 
        cout << temp[1]<<" "<< temp[2]/temp[1]<<'\n' ;
    }
    else {
        cout << temp[0]-1 << " "<<temp[1]/(temp[0]-1)<<'\n' ; 
    }
}

int32_t main() {
    fast_io;
        int t ; 
        cin>>t ; 
        while(t-->0){
        findAns();
        }
    
}
