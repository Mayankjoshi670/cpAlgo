#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns(int n , vvi & inpt) {
    vector<int>dp(n+1 , 0 ) ; 
    for(int i = 1 ; i< n ; i++){
        dp[i] = dp[i-1] ;
        int 
        for(int j = i-1 ; j>= 0 ; j++){
            if(inpt[j][2] < inpt[i-1][1]){

            }
        }
    }
}

int32_t main() {
    fast_io;
int n ; 
cin>> n ; 
vector<vector<int>>inpt ; 
for(int i = 0 ; i< n ; i++){
    int a , b , c ; 
    cin>> a>> b>> c ; 
    inpt.push_back({a, b, c}) ;
}     
        findAns(n , inpt);
    
}
