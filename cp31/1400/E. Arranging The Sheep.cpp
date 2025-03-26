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
string s ; 
cin >> s ; 
 vi temp ; 
 for(int i = 0 ; i< n; i++){
    if(s[i] == '*'){
        temp.push_back(i);
    }
 }
 int sz = temp.size() ;
 if(sz == 0 ){
    cout << 0 << endl ; 
    return ; 
 } 
 int mid_idx = sz/2 ;  
    int mid_val = temp[mid_idx] ; 
    int ans = 0 ; 
    for(int i = 0 ; i< sz ; i++){
        ans+= abs(temp[i] - (mid_val - mid_idx + i )) ; 
    }
    cout << ans << endl ; 
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
 
