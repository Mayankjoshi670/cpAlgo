#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define int long long

void findAns() {
    int n;
    cin >> n;

    vi a(n), b(n);
    for (auto &it : a) cin >> it;
    for (auto &it : b) cin >> it;

    vi prefix(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        prefix[i] = prefix[i - 1] + b[i - 1];
    }

    vi delta(n + 2, 0), extra(n + 2, 0);

    for (int i = 1; i <= n; ++i) {
        int target = a[i - 1] + prefix[i - 1];
        int r = lower_bound(prefix.begin() + i, prefix.begin() + n + 1, target) - prefix.begin();
        delta[i]++;
        delta[r]--;
        extra[r] += a[i - 1] + prefix[i - 1] - prefix[r - 1];
    }

    for (int i = 1; i <= n; ++i) {
        delta[i] += delta[i - 1];
        cout << delta[i] * b[i - 1] + extra[i] << " ";
    }
    cout << "\n";
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t-- > 0) {
        findAns();
    }
}
