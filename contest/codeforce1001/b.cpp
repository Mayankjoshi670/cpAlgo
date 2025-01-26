#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    int n ; 
    cin >> n ; 
    vi a(n); 
    for(auto &x : a) cin >> x ; 
    for(int i = 0 ; i < n ; i++)
{
      int l = i ; 
    int r = n-i-1  ;
    int val = a[i] ;  
    if( val<= i*2 || val<= (r*2)){
        cout<<"NO"<<endl ;
    return ; 
    } 
   
}
    cout << "YES"<<endl ; 
}

int32_t main() {
    fast_io;
    int t ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
