#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    int x , y ; 
    cin>> x >> y; 
    int sol = x-y+1 ; 
    if(sol%9 || sol <0  ){
        cout << "No" ; 
        cout << endl ; 

    }
    else {
        cout << "Yes"<< endl ; 
    }
    return  ; 
}

int32_t main() {
    fast_io;
    int t ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
