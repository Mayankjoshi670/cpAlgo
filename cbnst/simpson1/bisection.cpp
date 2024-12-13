#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
#define d double
#define f(x) (1 * ((x) * (x) * (x) - 4 * (x) - 9))
void findAns(d a , d b) {
    if(f(a)*f(b)>0){
        cout << "wrong interval";
        return  ; 
    }
    d res ; 
    for(int i = 0 ; i< 10 ; i++){
        res = (a+b)/2 ; 
        if(f(res)==0){
            cout << "exact roots"<< res <<endl  ;
            return ; 
        }
        else if (f(a)*f(res)<0){
            b = res ; 
        }
        else a = res ; 
    }
    cout << res << endl ; 
}

int32_t main() {
    fast_io;
     d a, b ; 
     cin>>a >> b; 
        findAns(a , b);
    
}
