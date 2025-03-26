// #include<bits/stdc++.h>
// using namespace std;
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// #define vi vector<int>
// #define vvi vector<vector<int>>
// #define ll long long 
// #define int long long int 

// void findAns() {
//     int n;
//     cin >> n;
    
//     int ans = 0;
//     for (int i = 1; i <= n; i++) {
//         ans += i * (n - i) + 1;
//     }
    
//     cout << ans << "\n";
// }

// int32_t main() {
//     fast_io;
//     int t;
//     cin >> t;
//     while (t-- > 0) {
//         findAns();
//     }     
// }
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string A, B;
    cin >> A >> B;
    
    vector<tuple<int, int, int>> operations;
    
    for (int i = 0; i < n; ++i) {
        if (A[i] != B[i]) {
            operations.push_back({1, i + 1, i + 1});
            A[i] = (A[i] == '0') ? '1' : '0';
        }
    }
    
    cout << operations.size() << "\n";
    for (auto &[type, L, R] : operations) {
        cout << type << " " << L << " " << R << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}