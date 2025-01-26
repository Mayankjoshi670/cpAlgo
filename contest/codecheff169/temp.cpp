#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define ll long long
#define int long long int

void findAns() {
    int n; 
    cin >> n;
    vi arr(n); 
    for (auto &it : arr) cin >> it;
    
    int total = accumulate(begin(arr), end(arr), 0LL);
    sort(begin(arr), end(arr));
    
    int ans = total;
    for (int i = 0; i < n; i++) {
        total -= arr[i];
        ans = max(ans, (ll)(total + pow(i + 1, 2)));  
    }
    cout << ans << endl;
}

int32_t main() {
    fast_io;
    int t; 
    cin >> t; 
    while (t-- > 0) {
        findAns();
    }
}
