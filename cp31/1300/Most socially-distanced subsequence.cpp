#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long
#define int long long int 

void findAns() {
    int n; 
    cin >> n; 
    vi arr(n);
    
    for (auto &it : arr) cin >> it; 
    
    map<int, int> mpp; 
     
    for (int i = 0; i < n - 1; i++) { 
        if (arr[i] > arr[i + 1]) {
            mpp[arr[i]] += arr[i];
            mpp[arr[i + 1]] -= arr[i + 1];
        }
        else {
            mpp[arr[i]] -= arr[i];
            mpp[arr[i + 1]] += arr[i + 1];
        }
    }

    int cnt = 0;
    vi res;
    
    for (auto it : arr) {
        if (mpp[it] != 0) {  
            cnt++;  
            res.push_back(it);
        }
    }

    cout << cnt << endl; 
    for (auto it : res) {
        cout << it << " "; 
    }
    cout << endl; 
}

int32_t main() {
    fast_io;
    int t = 1; 
    cin >> t; 
    while (t-- > 0) {
        findAns();
    }     
}
