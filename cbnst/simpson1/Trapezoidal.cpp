#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
#define f(x) 1/(1+x*x) 
#define d double
d findAns(d low , d high , d si ) {
        d h  = (high-low)/si ;
        d ans = f(low)+f(high) ; 
        for(int i = 1  ; i< si ;i++){
            d k = low+i*h ; 
            ans+= 2*(f(k))  ;
        } 
        return (ans*h)/2 ; 
}

int32_t main() {
    fast_io;
d l , h , si ; 
cin>>l >> h >> si ; 
      d res =   findAns(l , h , si );
        cout << res  ; 
}
