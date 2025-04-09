#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

bool canPartition( vi& a, int n, int k, int maxi) {
    int ans = 0;
    unordered_map<int, int> mpp;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] < maxi) {
            if (mpp[a[i]]++ == 0) {
                cnt++;
            }
        }
        
        if (cnt == maxi) {
            ans++;
            mpp.clear();
            cnt = 0;
        }
    }
    if(ans >= k )return 1 ; 
    return 0 ; 
    
}

void findAns() {
    int n , k ; 
    cin>> n >> k; 
    vi given(n) ; 
    for(auto & it : given) cin>> it ; 

    unordered_map<int, int> mpp;
    for (int x : given) mpp[x]++;

    int high = 0;
  
    while(true) {
        if(mpp.find(high) == mpp.end()) {
            break;
        } else {
            high++;
        }
    }
    
    int low = 0,  ans = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (canPartition(given, n, k, mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << '\n';
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
}
