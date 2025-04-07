#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
int n , x  , y ;
cin>> n >> x>> y  ; 
int total = 0 ; 
for(int i = 0 ; i< n;i++){
    int no ; 
    cin>> no ; 
    total+= no ;
}    
total+= (x+y) ;  
if(total %2  ){
    cout << "Bob"<<'\n' ; 
}
else {
    cout << "Alice"<<'\n' ; 
}
return  ; 
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
