
// #include<bits/stdc++.h>
// using namespace std;
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// #define vi vector<int>
// #define vvi vector<vector<int>>
// #define ll long long 
// #define int long long int 
// void findAns() {
//     int n ; 
//     cin>> n ; 
//     vector<tuple<int , int , bool >> store(n) ; 
//     for(int i = 0 ; i< n-1 ; i++){
//         int a , b ; 
//         cin>> a>> b; 
//         store[i]= {a  ,b , false} ; 
//     }
//     vector<int>vis(n+1) ; 
//     vis[1] = 1;
//     int cnt = 0 ;
//     bool flag = true ;  
//     while(flag){
//         cnt++  ; 
//         bool temp = false ; 
//         for(auto & it : store){
//             auto [u , v , checker] = it ; 
//             if(checker || (!vis[u] && !vis[v]))continue;
//             //  now means not visited 
//             temp= true ; 
//             checker = true ; 
//             if(vis[u]){
//                 vis[v] =1 ; 
//             }

//         }

//         if(!temp){
//             flag = false ; 
//             break ; 
//         }
//     }
//     cout << cnt -1 << endl; 
//     return ; 
// }

// int32_t main() {
//     fast_io;
//     int t; 
//     cin>> t; 
//     while(t-->0){
//         findAns();
//     }     
    
// }
#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long
#define int long long int
#define vvpi vector<vector<pair<int , int >>>
int ans  = 0 ; 
void dfs(int node , vvpi & adj , int parent , int iteration , int idx ){
    ans = max(ans , iteration) ;
    for(auto it : adj[node]){
        int to = it.first;
        int edge_index = it.second;
        if(to == parent) continue ;
        dfs(to , adj , node , iteration + (edge_index < idx) , edge_index);
    }
 }
void findAns() {
    int n;
    cin >> n;
    ans = 0 ; 
    vvpi graph(n ); 
    for (int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        a-- , b-- ; 
        graph[a].push_back({b , i });
        graph[b].push_back({a , i });
    }

    vector<int> vis(n , 0);
    dfs(0 , graph , -1 , 1 , -1) ; 
cout << ans << '\n'  ; 
    
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t-- > 0) {
        findAns();
    }
}
