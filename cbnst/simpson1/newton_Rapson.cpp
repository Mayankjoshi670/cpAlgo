#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
#define d double 
#define f(x) ((x)*(x)*(x) -(4*(x)) -9) 
#define fd(x) (3*(x)*(x) - 4)
void findAns(d a ) {
    d res ; 
    // formula ; 
    // a-f(a)/fd(a)
    for(int i = 0 ; i< 100 ; i++){
        res = a - f(a)/fd(a) ; 
        if(f(res) == 0 ){
        cout <<  res ; 
        break ; 
        }
        a = res ; 
    } 
    cout << res; 
}

int32_t main() {
    fast_io;
     d a ; 
     cin>>a ; 
        findAns(a);
    
}
