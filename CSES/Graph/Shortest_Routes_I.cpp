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
    vi dis(n + 1, LLONG_MAX);
    vector<vector<pair<int, int>>> graph(n + 1);

    for (int _ = 0; _ < m; _++) {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
    }

    // Dijkstra's 
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int src = 1;
    dis[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        // auto [current_dis, node] = pq.top();
       int current_dis= pq.top().first ;
       int node = pq.top().second ; 
        pq.pop();
        // Relaxing edges redundantly
        if (current_dis > dis[node]) continue;

        for (auto it : graph[node]) {
            int en = it.first; 
            int ew = it.second;
            if (dis[node] + ew < dis[en]) {
                dis[en] = dis[node] + ew;
                pq.push({dis[en], en});
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (dis[i] == LLONG_MAX) {
            cout << "INF ";
        } else {
            cout << dis[i] << " ";
        }
    }
    cout << endl;
}

int32_t main() {
    fast_io;
    findAns();
    return 0;
}
