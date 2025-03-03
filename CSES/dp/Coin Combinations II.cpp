#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007

int countWays(int n, vector<int>& coins, int x, int idx) {
    if (x == 0) return 1;
    if (x < 0 || idx == n) return 0;

    int take = countWays(n, coins, x - coins[idx], idx) % mod;  
    int skip = countWays(n, coins, x, idx + 1) % mod;  
    return (take + skip) % mod;
}

int32_t main() {
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) cin >> coins[i];
    
    cout << countWays(n, coins, x, 0) << endl;
}
