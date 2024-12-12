#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

#define f(x) 1/(1+x*x)
#define  d double  
d findAns(d low , d high , d splits ) {

    d split_cnt = (high - low)/splits ; 
    d ans = f(low)+ f(high) ; 
    for(int i = 1; i< splits ;i++){
        d k = low + i * split_cnt ; 
        if(i%2 ==0){
            ans += 2*f(k)  ;
        }
        else{
            ans+= 4*f(k) ;
        }
    }
    return ans*split_cnt/3 ; 

}

int32_t main() {
    fast_io;
    int low , high , splits ; 
    cin>>low >>high >> splits ; 
    double ans =     findAns(low , high , splits); 
     cout << "\nRequired value of integration is: %.3f"<<ans ; 
}
