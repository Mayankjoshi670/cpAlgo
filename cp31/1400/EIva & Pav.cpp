#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>> 
#define ll long long 
#define int long long int 

bool isPossible(int l, int r, int mid, vvi &prefix) {
    int curr = 0;
    for (int i = 0; i < 32; i++) {
        int val = prefix[mid][i];
        if (l != 0) val -= prefix[l - 1][i];
        if (val == mid - l + 1) curr += (1 << i);
    }
    return curr >= r;
}

int binarySearch(int l, int r, vvi &prefix, int n) {
    int low = l;
    int high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isPossible(l, r, mid, prefix)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans == -1 ? ans : ans + 1;
}

void solve() {
    int  n;
    cin >> n;

  vi  arr(n) ; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int q;
    cin >> q;
    vpi queries(q);
    for (int i = 0; i < q; i++) {
        cin >> queries[i].first >> queries[i].second;
        queries[i].first--;  
        queries[i].second--;
    }
 
    vvi pref(n, vi(32, 0));

    for (ll i = 0; i < n; i++) {
        ll v = arr[i];
        for (ll p = 0; p < 32; p++) {
            pref[i][p] = (v >> p) & 1;
        }
    }
 
    for (ll i = 1; i < n; i++) {
        for (ll j = 0; j < 32; j++) {
            pref[i][j] += pref[i - 1][j];
        }
    }
 
    for (ll i = 0; i < q; i++) {
        ll l = queries[i].first;
        ll r = queries[i].second;
        cout << binarySearch(l, r, pref, n) << " ";
    }
    cout << endl;
}

int32_t main() {
    fast_io;
    int t; 
    cin >> t; 
    while (t-- > 0) {
        solve();
    }
}
