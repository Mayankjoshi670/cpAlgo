#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
   string s ; 
   cin>>s ; 
   int n = s.length() ; 
   int cnt = 0 ; 
   for(int i = 0 ; i< n-3  ; i++){
    bool flag = false ; 
    for(int j = i+3 ; j< n ; j++){
        if(flag || s.substr( j-3 , 4 ) == "bear"){
            flag = true ; 
            cnt++ ;
        }
    }
   } 
   cout << cnt << '\n'; 
}

int32_t main() {
    fast_io;
     
        findAns();
    
}
