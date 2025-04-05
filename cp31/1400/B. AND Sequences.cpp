#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
const int MOD = 1e9 + 7;

long long factorial(int n) {
    long long res = 1;
    for (int i = 2; i <= n; i++) {
        res = (res * i) % MOD;
    }
    return res;
}
void findAns() {
    int n ; 
    cin >> n ; 
    vi a(n) ; 
    for(auto & it : a)cin>> it ; 
    int total = -1 ; 
    for(int i = 0 ; i< n ; i++){
        if(i == 0 )total = a[i];
        else total&=a[i] ; 
    }
    int cnt = 0 ;
    for(int i = 0 ; i< n ; i++){
        if (a[i] == total) cnt++;
    }
    if (cnt < 2) {
        cout << 0 << "\n";
    } else {
        long long result = (1LL * cnt * (cnt - 1)) % MOD;
        result = (result * factorial(n - 2)) % MOD;
        cout << result << "\n";
    }

}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
