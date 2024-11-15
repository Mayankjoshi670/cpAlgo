#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long
#define int long long int

void findAns() {
    int n, k;
    cin >> n >> k;
    vi arr(n);
    for (auto &it : arr) cin >> it;

    int l = 0, r = 0;
    int sum = 0, cnt = 0;

    while (r < n) { 
        sum += arr[r];
 
        while (l <= r && sum > k) {
            sum -= arr[l];
            l++;
        }
 
        if (sum == k) cnt++;

        r++;
    }
    cout << cnt;
}

int32_t main() {
    fast_io;
    findAns();
}
