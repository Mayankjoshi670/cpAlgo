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
 unordered_map<int , int>mpp ;
 for(auto it : arr)mpp[it]++ ; 
 int nn =n-2 ;  
 int a=1 , b = 1 ; 
    for(int i = 1 ; i*i <= nn   ; i++){
        if(nn % i  == 0 ){
         a = i ; 
         b = nn/i ; 
         if(mpp.find(a) != mpp.end() and mpp.find(b)!= mpp.end()){
            cout << a <<" " << b<<'\n' ;
            return ;  
         }   
        }
    }
   
   
}
int32_t main() {
    fast_io;
     int t ; 
     cin>> t ; 
     while(t-->0 ){
        findAns();
     }
    
}
