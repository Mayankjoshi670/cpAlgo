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
    string s ; 
    cin>> s; 
    vector<string>temp = {"RGB" , "RBG" , "GBR" , "GRB" , "BRG" , "BGR"  };
    int ans = LLONG_MAX ; 
    for(auto it : temp){
        int cnt = 0 ;  
        for(int i = 0 ; i< n ; i++){
            if(s[i] != it[i%3]){
                cnt++ ; 
            }
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl; 
    return ;
}

int32_t main() {
    fast_io;
    int t; 
    cin>> t ; 
    while(t-->0){

        findAns();
    }     
    
}
