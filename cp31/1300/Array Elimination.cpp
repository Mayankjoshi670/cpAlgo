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
   vi arr(n) ;
   for(auto & it : arr)cin>> it ;
    vi res(33) ; 
    for(int i = 0 ; i< 32 ; i++){
        for(int j = 0 ; j < n ; j++){
            if(arr[j]& (1<< i ))res[i]++ ; 
        }
    }
    vi ans ;
    for(int i = 1 ; i<= n ; i++){
        bool ok = true ; 
        for(int j = 0 ; j< 32 ; j++){
            if(res[j]%i != 0 ) {ok = false ;
                break ; }  
        }
        if(ok)ans.push_back(i) ;
    }
    for(auto it : ans )cout << it << " "  ; 
    cout << endl ;  
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
