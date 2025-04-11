//  i did't understand the code 
#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
int n ; 
cin>> n; 
vi mark(n+1) ; 
bool flag =false ; 
for(int i = 1 ; i<= n ; i++){
    int x , y ; 
    cin>> x>> y ; 
    if(y != 1){
        //  it dis respect his parent
        mark[i] =1  ; 
        if(x!= -1)mark[x] = 1   ; 
    }
}
for(int i = 1 ; i<= n ; i++){
if(mark[i]!= 1){
    cout << i << " " ; 
    flag = true ; 
}
}
if(!flag){
    cout << -1 ;
}
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    // cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
