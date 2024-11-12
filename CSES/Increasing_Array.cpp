#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define ll long long
#define int long long int

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    for (auto &it : arr) cin >> it;
    
    int cnt = 0;
    int maxi = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < maxi) {
            cnt += maxi - arr[i];
        } else {
            maxi = arr[i];
        }
    }
    cout << cnt;
}

int32_t main() {
    fast_io;
    solve();
    return 0;
}
