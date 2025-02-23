#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 

void findAns() {
    int n; 
    cin >> n; 
    vi arr(n); 
    for (auto &it : arr) cin >> it;

    vi diffIdx;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            diffIdx.push_back(i);
        }
    } 
    int q;
    cin >> q;
    while (q-- > 0) {
        int l, r; 
        cin >> l >> r;
        l--, r--;  // Convert to 0-based indexing

        int lb = lower_bound(diffIdx.begin(), diffIdx.end(), l) - diffIdx.begin();
        if (lb < diffIdx.size() && diffIdx[lb] < r) {
            // convert to 1 based again while printing th result 
            cout << diffIdx[lb] + 1 << " " << diffIdx[lb] + 2 << '\n'; 
        } else {
            cout << -1 << " " << -1 << '\n'; 
        }
    }
}

int main() {
    fast_io;
    int t; 
    cin >> t; 
    while (t-- > 0) {
        findAns();
    }
    return 0;
}
