#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
#define d double 
#define f(x) (((x) * (x) * (x)) - (x) - 1) 
void findAns(d a , d b) {
    d res ;
    for(int i = 0; i< 10 ; i++){
        res = (a*f(b)-b*f(a))/(f(b) - f(a)) ;
        if(f(a)*f(res)==0) {
            cout <<"exact root"<<res ; 
        } 
        else if (f(a)*f(res)<0){
            b = res ; 
        }
        else {
            a = res ; 
        }
    }
    cout << res << endl ; 

}

int32_t main() {
    fast_io;
d a ,b ;      
cin>>a>>b ; 
        findAns(a , b);
    
}
