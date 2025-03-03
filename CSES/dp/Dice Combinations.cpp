#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long
#define int long long int

const int val = 1e6+1;  
const int mod = 1e9 + 7;

vector<int> dp(val, -1);   

int findAns(int n) {
    if (n == 0 || n == 1) return 1;
    if (dp[n] != -1) return dp[n];

    int res = 0;
    for (int i = 1; i <= 6; i++) {
        if (n - i >= 0)
            res = (res + findAns(n - i)) % mod;  
    }
    return dp[n] = res;
}

int32_t main() {
    fast_io;

    int n;
    cin >> n;
     

    dp[0] = 1;   
    int res = findAns(n);
    cout << res << '\n';

    return 0;
}
