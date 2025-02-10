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
    vi arr(n) ; 
    for(auto & it : arr) cin>> it ; 
    int x;  
    cin>> x; 
  if(n <=1){
    cout << "YES"<<endl ; 
    return ; 
  } 
  int prev = min(arr[0] , x-arr[0]) ; 
   for(int i = 1 ; i< n ; i++){
    int op1 = arr[i] ; 
    int op2 = x - arr[i] ;
    vi res ; 
    if(op1 >= prev){
res.push_back(op1) ; 
    }
     if(op2 >= prev) {
        res.push_back(op2) ;
    }
    if(res.empty()) {
        cout << "NO" << endl ;
        return ;
    }
   prev = *min_element(begin(res), end(res));
}
cout << "YES"<<endl ;
return ; 

}

int32_t main() {
    fast_io;
    int t; 
    cin>>t;
    while(t--){

        findAns();
    }     
}


