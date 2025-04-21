#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

void findAns() {
    int n, m, k; 
    cin >> n >> m >> k;

    vi a(k), b(k); 
    for (int i = 0; i < k; i++) {
        cin >> a[i];
        a[i]--;  
    }
    for (int i = 0; i < k; i++) {
        cin >> b[i];
        b[i]--;
    }

    vi fq1(n, 0), fq2(m, 0); 
    for (auto it : a) fq1[it]++;
    for (auto it : b) fq2[it]++;

    int ans = 0;
    for (int i = 0; i < k; i++) {
        ans += k - fq1[a[i]] - fq2[b[i]] + 1;
    }

    cout << ans / 2 << '\n';  
}

int32_t main() {
    fast_io;
    int t = 1; 
    cin >> t; 
    while (t-- > 0) {
        findAns();
    }
}
