#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    string s; 
    cin>> s ;
    bool flag = false ; 
    for(int i = 0 ; i< s.length()-1 ; i++){
        if(s[i] == s[i+1]){
            flag = true ; 
        }
    }
    if(flag)cout << 1 << endl ; 
    else {
        cout << s.size() << endl ;
    }
    return ; 
}

int32_t main() {
    fast_io;
    int t; 
    cin>>t;
    while(t-->0){
        findAns();
    }     
    
}
