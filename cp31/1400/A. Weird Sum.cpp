#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define int long long int 

void findAns() {
    int n, m;
    cin >> n >> m;

    map<int, vi> mx, my;
    vvi arr(n, vi(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            mx[arr[i][j]].push_back(i + 1);
            my[arr[i][j]].push_back(j + 1);
        }
    }

    int ans = 0;

    for (auto &[it, temp] : mx) {
        sort(temp.begin(), temp.end());
        int suf = 0, pref = 0;
        for (int i = 0; i < temp.size(); i++) {
            ans += (temp[i] * i - pref);
            ans += (suf - temp[i] * i);
            pref += temp[i];
            suf += temp[temp.size() - i - 1];
        }
    }

    for (auto &[it, temp] : my) {
        sort(temp.begin(), temp.end());
        int suf = 0, pre = 0;
        for (int i = 0; i < temp.size(); i++) {
            ans += (temp[i] * i - pre);
            ans += (suf - temp[i] * i);
            pre += temp[i];
            suf += temp[temp.size() - i - 1];
        }
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
