#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    int n ;
    cin>>n ; 
    vector<int>v(n) ;
    for(auto & it : v)cin >> it ; 
    for(int i = 0 ; i< n-1 ; i++){
        if(v[i]>v[i+1]){
            cout << "NO" << endl;
            return ; 
        }
        else {
            v[i+1]-=v[i];
            v[i] = 0 ; 
        }
    }
    cout << "YES" << endl;
}

int32_t main() {
    fast_io;
    int t; 
    cin>> t ; 
    while(t-->0){

        findAns();
    }     
    
}
