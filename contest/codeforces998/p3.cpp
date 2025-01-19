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
    vi arr(n); 
    for (auto &it : arr) cin >> it; 
    sort(begin(arr), end(arr)); 

    int cnt = 0; 
    int i = 0, j = n - 1; 
    while (i < j) {
        int sum = arr[i] + arr[j]; 
        if (sum < m) 
            i++; 
        else if (sum > m) 
            j--; 
        else {
            cnt++; 
            i++; 
            j--; 
        }
    }
    cout << cnt << endl;
}

int32_t main() {
    fast_io;
    int t; 
    cin >> t; 
    while (t-- > 0) {
        findAns();
    }  
}
