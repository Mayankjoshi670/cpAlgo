#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    int n , k ; 
    cin>> n >> k ; 
    vi a1(n) , a2(n) ;
    for(auto &it: a1)cin>> it ; 
    for(auto &it : a2)cin>> it ; 
    vi temp(n) ; 
    for(int i = 0 ; i<  n ; i++){
        temp[i] = a1[i]*a2[i] ; 
    }
    sort(rbegin(temp) , rend(temp)) ; 
    int cnt = 0 ;
    int index = 0;  
    while(k>0 and index< n ){
        cnt++ ; 
        k-= temp[index++] ; 
    }
    if(k>0) cout << -1 << '\n'  ; 
   else {
     cout << cnt << '\n' ; 
   }
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
