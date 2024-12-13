#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
#define d double 
#define f(x) cbrt(x+1)
void findAns() {
    d a,res ; 
    cin>>a ; 
    for(int i = 0 ; i< 10 ;i++){
        res = f(a) ;
        if(fabs(res -a)<1e-6){
            cout << "aprox roots are "<< res ; 
        return ; 
        }

        a = res ; 
    }
    cout << res << endl ;
}

int32_t main() {
    fast_io;
     
        findAns();
    
}
