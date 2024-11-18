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
    vector<int>dis(n+1, INT_MAX) ,parent(n+1 , -1 ) ;  
    vector<vector<int>> arr(n+1) ; 
     
    for(int i  = 0 ; i< m ; i++){
        int a , b; 
        cin>> a>> b; 
        arr[a].push_back(b) ; 
        arr[b].push_back(a) ; 
    }
    queue<int>q ; 
    q.push(1) ; 
    dis[1] =0 ; 
    while(!q.empty()){
        int node = q.front() ; 
        q.pop() ; 
        for(auto it : arr[node]){
            if(dis[it]== INT_MAX){
                dis[it] = dis[node]+1 ; 
                parent[it] = node ; 
                q.push(it);  
            }
        }
    }
    if(dis[n]== INT_MAX)cout << "IMPOSSIBLE" <<'\n';
    else {
        cout << dis[n] + 1 << '\n';  
        vector<int> ans;
        int current = n;
        while (current != -1) {
            ans.push_back(current);
            current = parent[current];
        }
        reverse(begin(ans), end(ans));
        for (auto it : ans) cout << it << " ";
        cout << '\n';
    }
}

int32_t main() {
    fast_io;
     
        findAns();
    
}
