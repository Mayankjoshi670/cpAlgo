#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

// DSU data structure with path compression and union by rank
class DSU {
public:
    vi parent, rank;
    
    DSU(int n) {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        iota(parent.begin(), parent.end(), 0);
    }
    
    int find(int u) {
        if (parent[u] != u) {
            parent[u] = find(parent[u]);  // Path compression
        }
        return parent[u];
    }
    
    void unite(int u, int v) {
        int rootU = find(u);
        int rootV = find(v);
        
        if (rootU != rootV) {
            // Union by rank
            if (rank[rootU] > rank[rootV]) {
                parent[rootV] = rootU;
            } else if (rank[rootU] < rank[rootV]) {
                parent[rootU] = rootV;
            } else {
                parent[rootV] = rootU;
                rank[rootU]++;
            }
        }
    }
};

void findAns() {
    int n, m1, m2;
    cin >> n >> m1 >> m2;
    
    DSU dsuF(n), dsuG(n);
    
    vector<pair<int, int>> edgesF(m1), edgesG(m2);
    
    // Input for graph F
    for (int i = 0; i < m1; ++i) {
        int u, v;
        cin >> u >> v;
        edgesF[i] = {u, v};
        dsuF.unite(u, v);  // Unite nodes in F
    }
    
    // Input for graph G
    for (int i = 0; i < m2; ++i) {
        int u, v;
        cin >> u >> v;
        edgesG[i] = {u, v};
        dsuG.unite(u, v);  // Unite nodes in G
    }
    
    // Count connected components in G for each vertex
    map<int, vector<int>> componentsInG;
    for (int i = 1; i <= n; ++i) {
        componentsInG[dsuG.find(i)].push_back(i);
    }

    // For each component in G, we need to determine the number of components in F
    int removeOperations = 0, addOperations = 0;
    
    for (auto& comp : componentsInG) {
        set<int> nodesInF;
        
        // Collect edges of F that are within this component
        for (auto& edge : edgesF) {
            int u = edge.first, v = edge.second;
            if (dsuG.find(u) == comp.first && dsuG.find(v) == comp.first) {
                nodesInF.insert(dsuF.find(u));
                nodesInF.insert(dsuF.find(v));
            }
        }
        
        // Calculate the number of add operations
        int componentCountInF = nodesInF.size();
        if (componentCountInF > 1) {
            addOperations += componentCountInF - 1;
        }
    }
    
    // Count remove operations for edges in F that should be removed
    for (auto& edge : edgesF) {
        int u = edge.first, v = edge.second;
        if (dsuG.find(u) != dsuG.find(v)) {
            removeOperations++;
        }
    }
    
    // The result for the test case is the sum of the remove and add operations
    cout << removeOperations + addOperations << '\n';
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        findAns();
    }     
}
