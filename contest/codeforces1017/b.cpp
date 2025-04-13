#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
 int n , m , l , r ; 
 cin>> n>> m >> l >> r ; 
 int temp = min(m , r)   ; 
 int b = temp - m ; 
 cout << b << " "<< temp<<'\n' ; 
 
 return ;    
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
