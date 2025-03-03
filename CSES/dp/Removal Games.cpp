#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

int findAns(vi &arr, int l, int r, vector<vector<int>> &dp) {
    if (l > r) return 0; 
    if (dp[l][r] != -1) return dp[l][r];
 
    int pickLeft = arr[l] + min(findAns(arr, l + 2, r, dp), findAns(arr, l + 1, r - 1, dp));
    int pickRight = arr[r] + min(findAns(arr, l + 1, r - 1, dp), findAns(arr, l, r - 2, dp));

    return dp[l][r] = max(pickLeft, pickRight);
}

int32_t main() {
    fast_io;
    int n; 
    cin >> n;
    vi arr(n);
    for (auto &it : arr) cin >> it;  

    vector<vector<int>> dp(n, vector<int>(n, -1));
    // cout << findAns(arr, 0, n - 1, dp);
    vvi cache(n , vi(n , 0 )) ; 
    for(int i = 0 ; i< n; i++){
        cache[i][i] = arr[i] ; 
    }
    for(int len =2 ; len <= n; len++){
        for(int l = 0 ;l<= n - len  ; l++){
            int r = l+ len -1 ; 
            int pickL = arr[l] + min((l + 2 <= r ? cache[l + 2][r] : 0), 
                                     (l + 1 <= r - 1 ? cache[l + 1][r - 1] : 0));
            int pickR = arr[r] + min((l + 1 <= r - 1 ? cache[l + 1][r - 1] : 0), 
                                     (l <= r - 2 ? cache[l][r - 2] : 0));
            cache[l][r] = max(pickL , pickR) ;  
        }
    }
    cout << cache[0][n-1] << '\n';
}
