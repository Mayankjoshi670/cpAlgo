#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    unsigned int x;
    cin >> n >> x;

    if (n == 1) {
        cout << x << "\n";
        return;
    }

    auto findAns = [&] (int num) -> int {
        int temp = 0;
        while ((1 << temp) < num) temp++;
        return temp;
    };

    int ans = 0;
    for (; ans <= n; ans++) {
        if ((ans & (~x)) != 0) break;
    }

    int temp = min(ans, n);
    int res = findAns(temp);
    unsigned int mask = (1 << res) - 1;
    bool exactMatch = (mask == x);
    int limit = exactMatch ? temp : min(ans, n - 1);

    vector<int> arr;
    for (int i = 0; i < limit; i++) {
        arr.push_back(i);
    }

    if (!exactMatch) {
        arr.push_back(x);
    }

    while ((int)arr.size() < n) {
        arr.push_back(0);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << (i + 1 == n ? "\n" : " ");
    }
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
