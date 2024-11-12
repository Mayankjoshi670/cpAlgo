#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long
#define int long long int

void findAns() {
    int n, x;
    cin >> n >> x;
    vi arr(n);
    for (auto &it : arr) cin >> it;
    sort(arr.begin(), arr.end());
    int i = 0, j = n - 1;
    int cnt = 0;

    while (i <= j) {
        if (arr[j] >= x) {
              j--;
            cnt++;
        } else if (arr[i] + arr[j] <= x) {
              cnt++;
            i++;
            j--;
        } else {
              cnt++;
            j--;
        }
    }
    cout << cnt;
}

int32_t main() {
    fast_io;
    findAns();
    return 0;
}
