#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    string s ; 
    int n ;  
    cin>>n ;
    cin>>s ; 
    for(int i = 0; i< n; i++){
        if(s[i] == '1')s[i] = '0' ;
        else s[i] = '1' ;
    }
    for(int i = 0; i<n ; i++){
        cout<<s[i] ;
    }
    cout << '\n' ; 
}

int32_t main() {
    fast_io;
            int t; 
            cin>> t ; 
            while(t-->0){
        findAns();
            }     
    
}
