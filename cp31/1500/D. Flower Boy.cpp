#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

void findAns() {
    int n , m ; 
    cin >> n >> m ; 
    vi a(n), b(m); 
    for(auto &it : a) cin >> it;
    for(auto &it : b) cin >> it; 

    vi prefix(m, LLONG_MAX); 
    vi suffix(m, LLONG_MIN); 
    int ans = LLONG_MAX;

    int p1 = 0; 
    for(int i = 0 ; i < n; i++){
        if(p1 >= m) break;
        if(a[i] >= b[p1]){
            prefix[p1] = i;
            p1++;  
        }
    }

    int p2 = m-1; 
    for(int i = n-1; i >= 0; i--){
        if(p2 < 0) break;
        if(a[i] >= b[p2]){
            suffix[p2] = i; 
            p2--; 
        }
    }

    if(prefix[m-1] != LLONG_MAX ){
        cout << 0 << '\n'; 
        return;
    }

    for(int i = 1 ; i < m - 1 ; i++){
        if(prefix[i-1] != LLONG_MAX && suffix[i+1] != LLONG_MIN && suffix[i+1] > prefix[i-1]){
            ans = min(ans , b[i]); 
        }
    }

    if(suffix[1] != LLONG_MIN){
        ans = min(ans , b[0]) ; 
    }

    if(ans == LLONG_MAX){
        cout << -1 << '\n';
    } else {
        cout << ans << '\n';
    }
}

int32_t main() {
    fast_io;
    int t = 1; 
    cin >> t; 
    while(t-- > 0){
        findAns();
    }     
}
