#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpi vector<pair<int , int >>
#define ll long long 
#define int long long int 
void findAns() {
int n ; 
cin>> n ; 
vpi city ;
unordered_map<int , vector<int>>mpp ; 
for(int i = 1 ; i<= n  ; i++){
    int val  ; 
    cin>> val ; 
    mpp[val-i].push_back(val) ; 
}

int ans = 0   ; 
for(auto &it : mpp){
    int sum = 0 ; 
    for(auto itt : it.second)sum+= itt ; 
    ans = max(ans , sum) ; 
}
cout << ans << '\n' ; 

}

int32_t main() {
    fast_io;
    int t = 1 ; 
    // cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
