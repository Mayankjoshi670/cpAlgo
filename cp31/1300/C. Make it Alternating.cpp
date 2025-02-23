#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
ll mod = 998244353 ; 

 
void findAns() {
string s ; 
cin>> s; 
ll minop = 0;
vector<long long >freq ; 
ll n= (ll)s.size(); 
ll cnt = 0 , res = 1 ; 
for(ll i = 0 ; i< n-1 ; i++){
    if(s[i] == s[i+1]){
        cnt++ ; 
    }
    else {
        minop+= cnt ; 
        cnt++  ; 
        res= (res%mod *cnt%mod)%mod ; 
        cnt = 0 ; 
    }
}
if(cnt){
    minop+= cnt ;
    cnt++ ; 
    res= (res%mod *cnt%mod)%mod ;
}
ll fact = 1 ;
for(ll i = 1; i <= minop; i++){
    fact = ((fact%mod)*(i%mod))%mod ; 
}

res = ((res%mod)*(fact%mod))%mod ; 
cout << minop << " "<< res << endl;  
 
}

int32_t main() {
    fast_io;
        int t; 
        cin>> t ; 
        while(t-->0){
            findAns();
        }     
    
}


