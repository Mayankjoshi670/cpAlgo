#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

void findAns() {
    int n, m; 
    cin >> n >> m; 
    vector<vector<pair<int, int>>> arr(n + 1);  
    vi dist(n + 1, LLONG_MAX);  
    vi disc(n + 1, LLONG_MAX);  

    for (int i = 0; i < m; i++) {
        int a, b, c; 
        cin >> a >> b >> c; 
        arr[a].push_back({b, c});  
    }    

    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq; 
    
    pq.push({0, {1, 0}});
    dist[1] = 0;  

    while (!pq.empty()) {
        auto it = pq.top(); 
        pq.pop(); 
        
        int d = it.first;  
        int u = it.second.first;  
        int f = it.second.second;  

        if (f == 0 && dist[u] < d) continue;
        if (f == 1 && disc[u] < d) continue;

        for (auto& edge : arr[u]) {
            int v = edge.first;  
            int weight = edge.second;  
            
            if (f == 0) {
                if (dist[v] > d + weight) {
                    dist[v] = d + weight;
                    pq.push({dist[v], {v, 0}});
                }
                
                if (disc[v] > d + weight / 2) {
                    disc[v] = d + weight / 2;  
                    pq.push({disc[v], {v, 1}});
                }
            }
            else {
                if (disc[v] > d + weight) {
                    disc[v] = d + weight;
                    pq.push({disc[v], {v, 1}});
                }
            }
        }
    }

    cout << min(dist[n], disc[n]) << '\n';
}

int32_t main() {
    fast_io;
    findAns();
    return 0;
}
