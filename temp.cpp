#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

void findAns(){
  int n ; 
  cin>> n ; 
  vi a1(n) , a2(n) ; 
  for(auto &it : a1)cin>> it ; 
  for(auto &it : a2)cin>> it ; 
  vi p1(n) , p2(n) ;
  p1[0] = a1[0] ; 
  p2[0] = a2[0] ; 

  for(int i = 1; i< n ; i++){
        p1[i] = p1[i-1]+a1[i] ;
        p2[i] = p2[i-1]+a2[i] ;        
  }
  
   

}

int32_t main() {
    fast_io;
    // int t;
    // cin >> t;
    // while (t-- > 0) {
        findAns();
    // }
}
