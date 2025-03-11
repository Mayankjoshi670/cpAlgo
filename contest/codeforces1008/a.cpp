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
   vi arr(n)  ; 
   for(auto & it : arr) cin >> it ; 
   int total = accumulate(arr.begin() , arr.end() , 0LL) ;
   if(total == n*k){
    cout << "YES"<<'\n' ; 
    return ; 
   }  
   cout << "NO"<<'\n' ; 
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
