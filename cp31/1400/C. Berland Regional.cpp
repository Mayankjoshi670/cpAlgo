#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define int long long
#define vi vector<int>
#define vvi vector<vector<int>>

void findAns() {
    int n;
    cin >> n;
    vi u(n), s(n);

    for (int i = 0; i < n; i++) cin >> u[i];
    for (int i = 0; i < n; i++) cin >> s[i];

    int max_uni_id = *max_element(u.begin(), u.end());
    vvi students(max_uni_id + 1);

    for (int i = 0; i < n; i++) {
        students[u[i]].push_back(s[i]);
    }

    for (int i = 1; i <= max_uni_id; i++) {
        sort(students[i].rbegin(), students[i].rend());  
        for (int j = 1; j < students[i].size(); j++) {
            students[i][j] += students[i][j - 1];  
        }
    }

    vi result(n + 1, 0);

    for (int i = 1; i <= max_uni_id; i++) {
        int sz = students[i].size();
        for (int k = 1; k <= sz; k++) {
            int groups = sz / k;
            result[k] += students[i][groups * k - 1];
        }
    }

    for (int k = 1; k <= n; k++) {
        cout << result[k] << " ";
    }
    cout << "\n";
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        findAns();
    }
}
