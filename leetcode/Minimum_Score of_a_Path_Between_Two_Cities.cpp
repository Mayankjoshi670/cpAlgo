#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
 
 vector<int>Dijkstra(int src , vector<vector<pair<int , int>>>&graph , int n ){
       // Dijkstra's 
     vi dis(n + 1, LLONG_MAX);
    
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
     return dis ; 
 }
 int minScore(int n, vector<vector<int>>& roads) {

return Dijkstra(1 , roads ,  n ) ; 

    }

int32_t main() {
    fast_io;
     vi arr = {1,3,4,43,2};
     minScore(5 , arr);
    
}
