#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define ll long long
#define int long long int

const int prime = 31;
const int mod = 1e9 + 7;

//  precompute powers 
vll Clc(int n) {
    vll p_ow(n);
    p_ow[0] = 1;
    for (int i = 1; i < n; i++) {
        p_ow[i] = (p_ow[i - 1] * prime) % mod;
    }
    return p_ow;
}

void findAns() {
    string t, p;
    cin >> t >> p;
    int n = t.size();
    int m = p.size();

    if (m > n) {
        cout <<0;
        return;
    }
    else if (n == m ){
        if(p ==t )cout << 1 ; 
        else cout << 0 ; 
        return ; 
    }

    // Precompute powers of prime
    vll p_ow = Clc(max(n, m));

    //   hash of the pattern
    int p_hash = 0;
    for (int i = 0; i < m; i++) {
        p_hash = (p_hash + (p[i] - 'a' + 1) * p_ow[i]) % mod;
    }

    //  hash of the text prefix 
    vector<long long> t_Hash(n + 1, 0);
    for (int i = 0; i < n; i++) {
        t_Hash[i + 1] = (t_Hash[i] + (t[i] - 'a' + 1) * p_ow[i]) % mod;
    }

    int cnt = 0;

    //  using rolling hash
    for (int i = 0; i <= n - m; i++) {
        //   hash of the current substring
        int c_hash = (t_Hash[i + m] + mod - t_Hash[i]) % mod;
        // Normalize hash by dividing by the corresponding power (aligns hashes)
        if (c_hash == (p_hash * p_ow[i]) % mod) {
            cnt++;
        }
    }
    
    cout << cnt << '\n';
}

int32_t main() {
    fast_io;
    findAns();
}
