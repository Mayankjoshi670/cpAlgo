#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n , x , m ; 
    cin>> n >> x >> m ; 
    vector<pair<int , int >>vp ; 
    for(int i = 0 ; i < m ; i++){
        int a , b ;
        cin>> a >> b ; 
        vp.push_back({a , b }) ; 
    }
    int l = x , r = x ; 
    // for(auto &[a , b ] : vp){
    for(auto it : vp){
        int a = it.first ;
        int b = it.second ;
         if (b >= l && a <= r) {
                l = min(l, a);
                r = max(r, b);
            }
    }
    cout << (r - l +1)<<'\n'  ; 
}
int main() {
    int t ; 
    cin>> t ; 
    while(t--){
        solve() ; 
    }

}
