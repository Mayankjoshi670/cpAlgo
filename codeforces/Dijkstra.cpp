#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    int n , m ; 
    cin>> n >> m ; 
    vi dis(n+1 , INT_MAX) ; 
    vector<vector<pair<int , int>>>grid ;
    for(int i = 0 ; i< m ; i++){
        int a , b, w ; 
        cin>>a>>b>>w ; 
        grid[a].push_back({b , w }) ; 
    } 

    priority_queue<pair<int , int> , vector<pair<int , int>> , greater<pair<int , int>>>pq ; 
    int src = 1 ; 
    dis[src] = 0 ;
    pq.push({0 , src});
    while(!pq.empty()){
        auto it = pq.top(); 
        pq.pop() ; 
        int ew = it.first ; 
        int node = it.second;
        if(ew > dis[node])continue;
        for(auto it : grid[node]){
            int nd = it.first ; 
            int weig = it.second ; 
            if(dis[node]+ ew < dis[nd] ){
                dis[nd] = dis[node]+ew ; 
                pq.push({dis[nd] , nd }) ; 
            }

        } 

    }
    for(auto it : dis){
        
    } 


}

int32_t main() {
    fast_io;
    // int t; 
    // cin>> t; 
    // while(t-->0){
    findAns();
    // }     
    
}
