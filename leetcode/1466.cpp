#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    
}

int32_t main() {
    fast_io;
     
        findAns();
    
}

class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<int>vis(n) ; 
        vector<vector<int>>adj(n) , back(n) ; 
        for(auto it: connections){
            adj[it[0]].push_back(it[1]) ; 
            adj[it[1]].push_back(it[0]);
        }  
        queue<int>q ; 
        int cnt = 0 ;
        q.push(0);  
        while(!q.empty()){
            int node = q.front() ; 
            q.pop() ; 
            vis[node] = 1; 
            for(auto it : adj[node]){
                if(!vis[it]){
                    cnt++ ; 
                    q.push(it) ; 
                }
            }
            for(auto it : back[node]){
                if(!vis[it]){
                    q.push(it) ; 
                }
            }
        }
        return cnt ; 
    }
};