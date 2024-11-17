#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, d, l;
        cin >> n >> d >> l;

        if (d >= n  l > n  l < 2 || d < 1) {
            cout << -1 << endl;
            continue;
        }

        if (n == 4 && d == 2 && l == 3) {
            cout << "1 2\n1 3\n1 4" << endl;
            continue;
        }

        vector<pair<int, int>> e;
        vector<int> v; 

        for (int i = 1; i <= d; ++i) {
            e.push_back({i, i + 1});
            if (i != 1 && i != d) {
                v.push_back(i + 1);
            }
        }

        int r = n - (d + 1);

        int lN = l - 2; 
        if (lN < 0 || lN > r) {
            cout << -1 << endl;
            continue;
        }

        int x = d + 2;

        for (int i = 0; i < lN; ++i) {
            e.push_back({v[i % v.size()], x});
            x++;
        }

        while (x <= n) {
            e.push_back({1, x});
            x++;
        }

        for (auto& edge : e) {
            cout << edge.first << " " << edge.second << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}