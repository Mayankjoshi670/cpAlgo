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
    vector<pair<int , int>>vpi ; 
    for(int i = 0 ; i< n ; i++){
        vpi.push_back({arr[i] , i }) ; 
    }
    sort(begin(vpi) , end(vpi)) ;
    int cnt = 1 , prev = -1 ; 
    for(auto it : vpi){
        int val = it.second ; 
        if(val > prev){
            prev = val ; 
            continue; 
        }
        else {
            cnt++ ; 
            prev = val ; 
        }
    }
    cout << cnt ; 

 }

int32_t main() {
    fast_io;
     
        findAns();
    
}
