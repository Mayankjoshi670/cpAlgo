#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
int n , k ; 
cin>> n>> k ;
map<int , int>mpp ; 
for(int i = 0 ; i< n ; i++){
    int no ; 
    cin>> no ; 
    int x = no%k ; 
    if(x!= 0 ){
        mpp[ k -x  ]++ ; 
    }
}    
int res = 0 ; 
for(auto it  :  mpp){
    int firs = it.first ; 
    int secon = it.second ; 
    
        res = max(res , (secon-1)*k+ firs+1 ) ; 
    
}
cout << res << endl  ; 
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
