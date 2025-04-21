#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void findAns() {
    int n; 
    cin >> n;

    vector<pair<ll,ll>>v;
    for(ll i=0; i<n; i++) {
        ll a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    sort(v.begin(), v.end());

    ordered_set<ll> st;
    for(ll i=0; i<n; i++) 
        st.insert(v[i].second);

    ll ans = 0;
    for(ll i=0; i<n; i++) {
        ll trgt = v[i].second;
        ll cnt = st.order_of_key(trgt); // Number of elements < trgt
        ans += cnt;
        st.erase(trgt); // Remove after processing
    }

    cout << ans << endl;
}

int32_t main() {
    fast_io;
    int t = 1; 
    cin >> t; 
    while(t-- > 0){
        findAns();
    }     
}
