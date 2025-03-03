#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
int findAns(string &s, string &t, int idx1, int idx2 , vvi & dp ) {
    if (idx1 == s.size()) return t.size() - idx2;  
    if (idx2 == t.size()) return s.size() - idx1;  
    if(dp[idx1][idx2]!= -1) return dp[idx1][idx2] ;
    if (s[idx1] == t[idx2]) {
        return dp[idx1][idx2] =  findAns(s, t, idx1 + 1, idx2 + 1  , dp );  
    }

    int replace = 1 + findAns(s, t, idx1 + 1, idx2 + 1 , dp );  
    int add = 1 + findAns(s, t, idx1, idx2 + 1 ,dp );  
    int del = 1 + findAns(s, t, idx1 + 1, idx2  , dp );  

    return dp[idx1][idx2]= min({replace, add, del});
}

int32_t main() {
    fast_io;
    string s, t; 
    cin >> s >> t;
    int x = max(s.size() , t.size()) ;
    int y = min(s.size() , t.size()) ;  
    vector<vector<int>>dp(x+1 , vi(x+1 , -1 )) ; 
    // cout << findAns(s, t, 0, 0 , dp );
    int n = s.size() ; 
    int m  = t.size() ; 
    vvi cahce(n+1 , vi(m+1   , 0)) ; 
    for(int i = 0  ; i<=n  ;  i++){
            for(int j = 0 ; j<=m ; j++){
                if(i == 0){
                    cahce[i][j] = j  ; 
                }
                 else if( j == 0 ){
                    cahce[i][j] = i ; 
                }
                else if(s[i-1] == t[j-1]){
                    cahce[i][j] = cahce[i-1][j-1] ; 
                }
                else {
                    cahce[i][j] = 1+min({
                        cahce[i-1][j] , 
                        cahce[i-1][j-1] ,
                        cahce[i][j-1] 
                    }) ; 
                }
            }
    }
    cout << cahce[n][m]  ;
}