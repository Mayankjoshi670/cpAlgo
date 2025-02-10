#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long
#define int long long int 

void findAns() {
    int n; 
    cin >> n; 
    vi arr(n); 
//  after careful analysis you got to know that thare can be 2 possible cases
// case 1 : 
//  we know that if a element is in majority it should come more then the half of the  time and 
//  there will be at least one adjacent pair of elements and it will be one ans 


// case 2 :
// in second case let take a example 4 5 4 here majority is 4 even they are not adjacent 
//  the key observiation is that  if ther is difference between then is one then it will also be ans 
// so we cewate a map out of a adjacency list and iterate over then if the count is greater than or equal to 2 then 
// it will also the ans  
    for (auto &it : arr) cin >> it; 

    vvi adj(n); 
    vi ans(n, 0);   

    for (int i = 0; i < n - 1; i++) {
        int u, v; 
        cin >> u >> v;
        u--; v--;   
        adj[u].push_back(v); 
        adj[v].push_back(u);
    }

    for (int i = 0; i < n; i++) {
        unordered_map<int, int> mpp; 
        for (auto it : adj[i]) {
            mpp[arr[it]]++; 
            if (arr[it] == arr[i]) {
                ans[arr[it] - 1] = 1; 
            } 
            else if (mpp[arr[it]] == 2) {
                ans[arr[it] - 1] = 1; 
            }
        }
    }

    for (auto it : ans) cout << it  ;
    cout << endl;
}

int32_t main() {
    fast_io;
    int t; 
    cin >> t; 
    while (t-- > 0) {
        findAns();
    }     
}
