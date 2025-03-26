#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
   int a , b , c ,d ; 
   cin >> a >> b >> c >> d ; 
   if( a== b && b==c and c== d ){
    cout << "YES"<<endl ; 
   } 
   else {
    cout << "NO"<<endl ;  
   }
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
