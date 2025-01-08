#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vi vector<int>
#define ll long long
 
bool canWe(int mid, vi &arr , int n ) {
    set<int> st(arr.begin(), arr.end());  
    if(st.size() == n ) return false ; 
    return st.size() >= mid;  
}

void findAns() {
    int n;
    cin >> n;
    vi arr(n);
    for (auto &it : arr) {
        cin >> it;
    }
    int l = 1, r = n, ans = 0;  
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (canWe(mid, arr ,  n )) {
            ans = mid;  
            l = mid + 1; 
        } else {
            r = mid - 1;  
        }
    }
    cout << ans << endl;
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
