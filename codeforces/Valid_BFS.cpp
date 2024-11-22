#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long
#define int long long int
const int N = 2e5 + 10;
vi arr(N);
vi demo(N);

bool cmp(const int &A, const int &B) {
    return demo[A] < demo[B];
}

void findAns() {
    int n;
    cin >> n;
    vvi grid(n + 1);  

    for (int i = 0; i < n - 1; i++) {  
        int a, b;
        cin >> a >> b;
        grid[a].push_back(b);
        grid[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        demo[arr[i]] = i;
    }

    for (int i = 1; i <= n; i++) {
        sort(grid[i].begin(), grid[i].end(), cmp);  
    }

    vector<bool> vis(n + 1, false);  
    queue<int> q;
    q.push(1);
    vis[1] = true;

    vi tempRes;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        tempRes.push_back(node);

        for (auto it : grid[node]) {
            if (!vis[it]) {
                q.push(it);
                vis[it] = true;
            }
        }
    }

    for (int i = 0; i < n; i++) {  
        if (tempRes[i] != arr[i + 1]) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int32_t main() {
    fast_io;
    findAns();
    return 0;
}
