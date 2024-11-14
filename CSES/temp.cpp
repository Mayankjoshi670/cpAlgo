// #include<bits/stdc++.h>
// using namespace std;
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// #define vi vector<int>
// #define vvi vector<vector<int>>
// #define ll long long 
// #define int long long int 
// void findAns() {
//     int n  , k ; 
//     vi arr(n) ; 
//     for(auto & it : arr)cin>> it ; 
//     map<int, int>mpp; 
//     for(auto it : arr)mpp[it]++ ; 
//     int ans = 0 ; 
//     int cnt = 0 ; 
//     int x =0 ; 
//     int prefix = 0 ; 
//     for(auto it: mpp){
//         int c nt = it.second ; 
//         if(k >= cnt-1 ){
//             k-= (cnt-1) ;
//             x+= (cnt-1) ; 
//             ans+= n-prefix
//         }
//     }

// }

// int32_t main() {
//     fast_io;
//      int t; 
//      cin>> t ; 
//      while(t-->0){
//         findAns();
//      }
    
// }
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pl pair<ll, ll>
#define nl "\n"

void solve() {
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    for (auto &x : arr) cin >> x;

    // Frequency map
    map<ll, ll> mpp;
    for (auto &x : arr) mpp[x]++;

    // Calculate initial non-diverse pairs
    ll tp = (n * (n - 1)) / 2;
    ll sp = 0;
    vector<ll> a;
    for (auto &f : mpp) {
        ll cnt = f.second;
        sp += (cnt * (cnt - 1)) / 2;
        a.push_back(cnt);
    }

    sort(a.rbegin(), a.rend());

    for (ll &c : a) {
        if (c == 1 || k == 0) break;

        if (k >= c - 1) {
            // Make this element distinct
            k -= (c - 1);
            sp -= (c * (c - 1)) / 2;
        } else {
            // Partially reduce this frequency
            sp -= (c * (c - 1)) / 2;
            c -= k;
            sp += (c * (c - 1)) / 2;
            k = 0;
        }
    }
    
    ll ans = tp - sp;
    int temp = 0 ; 
    for(auto it : mpp){
        temp+= (it.second-1);
            }
            if(temp>k ){
                int x = temp - k ; 
                ans+= x*(x-1)/2 ; 
            }
    cout << ans << nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}