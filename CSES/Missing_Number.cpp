#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define ll long long
#define int long long int

void solve() {
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n-1; i++) {
        int no;
        cin >> no;
        sum += no;
    }
    int actual = (n * (n +1)) / 2;
    cout << actual - sum;
    return ;
}

int32_t main() {
    fast_io;
    solve();
    return 0;
}
