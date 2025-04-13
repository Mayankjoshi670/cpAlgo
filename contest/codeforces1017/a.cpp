#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    string res = "" ; 
    for(int i = 0 ; i < 3 ; i++){
        string s ;  
        cin>> s; 
        res+= s[0] ; 
    }
    cout << res << '\n' ; 

}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
