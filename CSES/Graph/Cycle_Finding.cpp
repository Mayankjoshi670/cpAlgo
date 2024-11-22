// #include <bits/stdc++.h>
// using namespace std;
// #define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
// #define vi vector<int>
// #define vvi vector<vector<int>>
// #define ll long long 
// #define int long long int 

// void findAns() {
//     int n, m;
//     cin >> n >> m;
//     vvi dis(n + 1, vi(n + 1, LLONG_MAX));
//     vvi parent(n + 1, vi(n + 1, -1));

//     for (int i = 1; i <= n; i++) {
//         dis[i][i] = 0;
//     }

//     for (int i = 0; i < m; i++) {
//         int a, b, c;
//         cin >> a >> b >> c;
//         if (c < dis[a][b]) {
//             dis[a][b] = c;
//             // dis[b][a] = c;  
//             parent[a][b] = a;
//             // parent[b][a] = b;
//         }
//     }
 
//     for (int k = 1; k <= n; k++) {
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= n; j++) {
//                 if (dis[i][k] < LLONG_MAX && dis[k][j] < LLONG_MAX) {
//                     if (dis[i][j] > dis[i][k] + dis[k][j]) {
//                         dis[i][j] = dis[i][k] + dis[k][j];
//                         parent[i][j] = parent[k][j];
//                     }
//                 }
//             }
//         }
//     }
 
//     for (int i = 1; i <= n; i++) {
//         if (dis[i][i] < 0) {
//             cout << "YES\n";
//             int start = i;
//             set<int> visited; 
//             while (visited.find(start) == visited.end()) {
//                 visited.insert(start);
//                 start = parent[i][start];
//             }

//             int cycle_start = start;
//             vi cycle;
//             cycle.push_back(cycle_start);
//             start = parent[i][start];

//             while (start != cycle_start) {
//                 cycle.push_back(start);
//                 start = parent[i][start];
//             }
//             cycle.push_back(cycle_start);  

//             reverse(cycle.begin(), cycle.end());
//             for (auto it : cycle) cout << it << " ";
//             return;
//         }
//     }

//     cout << "NO";
// }

// int32_t main() {
//     fast_io;
//     findAns();
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

struct Edge {
    int from, to, weight;
};

void findAns() {
    int n, m;
    cin >> n >> m;

    vector<Edge> edges;
    vector<int> dis(n + 1, LLONG_MAX);
    vector<int> parent(n + 1, -1);

    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        edges.push_back({a, b, c});
    }

    int start = -1;
    dis[1] = 0;

    for (int i = 1; i <= n; i++) {
        start = -1;
        for (auto edge : edges) {
            if (dis[edge.from] < LLONG_MAX && dis[edge.from] + edge.weight < dis[edge.to]) {
                dis[edge.to] = dis[edge.from] + edge.weight;
                parent[edge.to] = edge.from;
                start = edge.to;
            }
        }
    }

    if (start == -1) {
        cout << "NO\n";
        return;
    }

    for (int i = 1; i <= n; i++) {
        start = parent[start];
    }

    vector<int> cycle;
    for (int cur = start;; cur = parent[cur]) {
        cycle.push_back(cur);
        if (cur == start && cycle.size() > 1) break;
    }
    reverse(cycle.begin(), cycle.end());

    cout << "YES\n";
    for (auto node : cycle) cout << node << " ";
}

int32_t main() {
    fast_io;
    findAns();
    return 0;
}
