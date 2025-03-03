#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

void findAns() {}

int32_t main() {
    fast_io;
    int n; 
    cin >> n; 
    vi arr(n); 
    for(auto &it : arr) cin >> it;
    vector<bool> dp(1e5+1 , false) ;
    dp[0] = true;  

    for(int i = 0 ; i< n; i++){
        vector<bool>curr(1e5+1 , false)   ; 
       int val = arr[i] ; 
        for(int j = 0 ; j<= 1e5 ; j++){
            if(dp[j]){
                curr[j+val] = true;
                curr[j] = true;
            }
        }
      dp =  curr ; 
    }
    int res = count(dp.begin()  , dp.end() , true) ;
    cout << res -1<< '\n' ;  
    for(int i = 1; i <= 1e5 ; i++){
        if(dp[i]){
            cout << i  << " " ; 
        }
    }
    cout << '\n';
}
