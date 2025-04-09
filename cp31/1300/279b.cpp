#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define int long long int

void findAns() {
    int n, k;
    cin >> n >> k;
    vi temp(n);
    for (auto &it : temp) cin >> it;

    int i = 0, j = 0;
    int total = 0;
    int ans = 0;

    while (j < n) {
        total += temp[j];
        while (total > k && i <= j) {
            total -= temp[i];
            i++;
        }
        ans = max(ans, j - i + 1);
        j++;
    }

    cout << ans << '\n';
}

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t-- > 0) {
        findAns();
    }
}
