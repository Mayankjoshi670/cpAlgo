#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
#define um unordered_map<int, int > 

bool checker(vi &arr) {
    int n = arr.size();
    if (n == 1) return true;
    for (int i = 1; i < n; i++) {
        if (arr[i] <= arr[i - 1]) return false;
    }
    vi diff;
    for (int i = 1; i < n; i++) {
        diff.push_back(arr[i] - arr[i - 1]);
    }
    return checker(diff);
}

void solve(int n, vi &arr) {
    if (n > 31) {
        cout << string(n, '0') << "\n";
        return;
    }
    string result = "";
    for (int i = 0; i < n; i++) {
        vi temp;
        for (int j = 0; j < n; j++) {
            if (j != i) temp.push_back(arr[j]);
        }
        result += (checker(temp) ? '1' : '0');
    }
    cout << result << "\n";
}

int32_t main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vi arr(n);
        for (auto &x : arr) cin >> x;
        solve(n, arr);
    }
    return 0;
}