#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long
#define int long long int

void findAns() {
    int n, m;
    cin >> n >> m;
    vi a(n);
    for (auto &it : a) cin >> it;

    if (m > 2) {
        cout << 0 << endl;
        return;
    }

    sort(begin(a), end(a));

    if (m == 1) {
        int ans = a[0];
        for (int i = 0; i < n ; i++) {  
            for(int j = i+1 ; j< n ; j++){
            ans = min(ans, abs(a[j] - a[i]));
        }}
        cout << ans << endl;
        return;
    }

    // m == 2
    int ans = a[0];
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = abs(a[j] - a[i]);
            ans = min(ans, diff);

            auto it = lower_bound(a.begin(), a.end(), diff);
                ans = min(ans, abs(*it - diff));
            
            if (it != a.begin()) {
                it--;
                ans = min(ans, abs(*it - diff));
            }
        }
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
