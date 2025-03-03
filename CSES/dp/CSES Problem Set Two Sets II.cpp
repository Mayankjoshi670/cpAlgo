#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
#define MOD 1000000007
int modInverse(int a , int exp , int mod){
    int res = 1;
    while(exp>0){
        if(exp%2 ==1){
            res = (res*a)%mod ; 
        }
            a  = (a*a)%mod ; 
            exp/= 2 ; 
    }
    return res ; 
}
int findAns(int n , int target) {
    vi dp(target+1) ; 
    dp[0] = 1 ;
    for(int i = 0 ; i< n ; i++){
        for(int j = target ; j>= 0  ; j--){
            if(j >= i ){
                dp[j] = (dp[j]+dp[j-i])%MOD ;
        }
    }
    }     
    // return ((dp[target])%MOD)/2 ;
    // return (dp[target] * ((MOD + 1) / 2)) % MOD;
    int modInverse2 = modInverse(2, MOD - 2, MOD); // 2^(MOD-2) % MOD
    return (dp[target] * modInverse2) % MOD; 
}

int32_t main() {
    fast_io;
int n ; 
cin>> n; 
int sum = n*(n+1)/2 ; 
if(sum%2 ==1){
    cout << 0    ;
    return 0  ; 
}     
       cout <<  findAns(n , sum/2);
    
}
