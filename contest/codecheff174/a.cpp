#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    int n ; 
    cin >> n ; 
    vi arr(n) ;  
    for(auto & it : arr)cin>> it ; 
    
    unordered_map<int , int >mpp ; 
    for(auto & it  : arr){
        mpp[it]++ ; 
    }
    if(mpp.size() == n){
        cout <<  n << endl ; 
        return  ; 
    }
    if(n == 2 ){
        cout << 1 << endl ; 
        return ; 
    }
    int zero= 0 , other = 0 ; 
    for(auto & it : mpp){
        int val = it.first ; 
        int cnt = it.second ; 
         if(val == 0) zero += cnt ;
         else {
            if(cnt%2 == 1){
                other++ ; 
                zero += cnt/2 ; 
            }
         }
    }
    cout << other +1  << endl ; 
     

}

int32_t main() {
    fast_io;
    int t; 
    cin>> t; 
    while(t-->0){
        findAns();
    }     
    
}
