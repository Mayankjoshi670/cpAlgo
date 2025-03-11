#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define ll long long 
#define int long long int

void findAns() {
    int n, k; 
    cin >> n >> k; 
    vi input(n);
    for (auto &it : input) cin >> it;

    int total = 0;
    double res = 0;

     for (int i = 0; i < k; i++) {
        total += input[i];
    }

    res = total;

    int j = k;
    for (int i = 1; i <= n - k; i++) {
        total -= input[i - 1]; 
        total += input[j];      

        j++;
        res += total;
    }
 
    res = res / (n - k + 1);

     cout << fixed << setprecision(6) << res << endl;}

int32_t main() {
    fast_io;
    findAns();
}
