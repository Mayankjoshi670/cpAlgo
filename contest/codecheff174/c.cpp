#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

void findAns() {
    int n; 
    cin >> n; 
    vi arr(n); 
    int maxi = 0; 
    unordered_map<int, int> mpp; 
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
        mpp[arr[i]]++;
        maxi = max(maxi, arr[i]); 
    }

    long long ans = n+1 ; 
    for(int i = max(1LL, maxi - n); i <= maxi; i++) {   
        long long freq_Multi = 0; 
        for(int j = i; j <= maxi; j += i) {
            freq_Multi += mpp[j];  
        }
        if(freq_Multi > 0) {
            ans = max(ans, freq_Multi+i);  
        }
    }
    cout << ans << endl; 
}

int32_t main() {
    fast_io;
    int t; 
    cin >> t; 
    while(t-- > 0) {
        findAns(); 
    }     
}
