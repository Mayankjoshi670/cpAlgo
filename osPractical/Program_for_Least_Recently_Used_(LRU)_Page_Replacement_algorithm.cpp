#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

int findAns(vi val, int n, int cap) {
    set<int> st;
    unordered_map<int, int> mpp_idx;
    int cnt_fault = 0;
    for (int i = 0; i < n; i++) {
        if (st.size() < cap) {
            if (st.find(val[i]) == st.end()) {
                st.insert(val[i]);
                cnt_fault++;
            }
            mpp_idx[val[i]] = i;
        } else {
            if (st.find(val[i]) == st.end()) {
                int lru = LLONG_MAX;
                int value = -1;
                for (auto it : st) {
                    if (mpp_idx[it] < lru) {
                        lru = mpp_idx[it];
                        value = it;
                    }
                }
                st.erase(value);
                mpp_idx.erase(value);
                st.insert(val[i]);
                cnt_fault++;
            }
            mpp_idx[val[i]] = i;
        }
    }
    return cnt_fault;
}

int32_t main() {
    fast_io;
    int n, cap;
    cin >> n >> cap;
    vi val(n);
    for (auto &it : val) cin >> it;
    int pf = findAns(val, n, cap);
    int ph = n - pf;
    cout << pf << " " << ph;
}
