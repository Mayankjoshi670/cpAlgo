#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
const int N = 2e5 + 10;
 

 class DSU{
    public : 
    vector<int>parent , rank ; 
    DSU(int n ){
        parent.resize(n+1) ;
        rank.resize(n+1, 0); 
        for(int i = 1 ; i<= n ; i++){
            parent[i] = i ; 
        }
    }

        int findP(int x){
            if(x!= parent[x]){
                parent[x] = findP(parent[x]) ; 
            }
            return parent[x] ; 
        }
        bool join(int x , int y ){
            int xRoot = findP(x) ; 
            int yRoot = findP(y) ; 
            if(xRoot == yRoot)return false ; 
            else if(rank[xRoot]> rank[yRoot])parent[yRoot] =xRoot ; 
            else if(rank[xRoot]< rank[yRoot])parent[xRoot] = yRoot ;
            else {
                parent[yRoot] = xRoot ; 
                rank[xRoot]++ ; 
            }
            return true ; 
        }
    };

void findAns() {
    int n, m1, m2;
    cin >> n >> m1 >> m2;
 
    DSU dsuf(n), dsug(n) ; 

    vector<pair<int, int>> edgF(m1), edgG(m2);
    for (int i = 0; i < m1; ++i)
    {
        cin >> edgF[i].first >> edgF[i].second;
    }
    for (int i = 0; i < m2; ++i)
    {
        cin >> edgG[i].first >> edgG[i].second;
        dsug.join(edgG[i].first, edgG[i].second);
    }
  int ans = 0 ; 
  for(int i = 0 ; i< m1 ; i++){
    int u = edgF[i].first ; 
    int v = edgF[i].second ; 
    if(dsug.findP(u) == dsug.findP(v)){
        dsuf.join(u , v) ; 
    }
    else ans++ ;
  }

  for(int i = 0 ; i< m2 ; i++){
    int u = edgG[i].first ; 
    int v = edgG[i].second ;
    if(dsuf.findP(u)!= dsuf.findP(v)){
        dsuf.join(u , v) ; 
        ans++ ; 
    }
  }
  cout << ans << "\n";

    
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t-- > 0) {
        findAns();
    }
    return 0;
}
