#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

void findAns() {
    int n;
    cin >> n;
    vi arr(n);
    for (auto &it : arr) cin >> it;
    multiset<int> st;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        auto it = st.upper_bound(arr[i]);
        if (it == st.end()) {
            cnt++;
            st.insert(arr[i]);
        } 
        else {
            st.erase(it);
            st.insert(arr[i]);
        }
    }
    cout << cnt;
}

int32_t main() {
    fast_io;
    findAns();
}
