#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
int  findAns(vi & arr , int n ) {
    vi  cache (n  ,  1) ; 
    //  dp[i] = maximum length of lis ending at index i 
    for(int i = 1; i < n ; i++){
        for(int j = 0 ; j< n ; j++){
          if(j < i && arr[i] > arr[j]){
            cache[i] = max(cache[i], 1 + cache[j]);   
          }
        }
    }
    return *max_element(cache.begin(), cache.end());
}

int longestIncreasingSubsequence(vector<int>& arr) {
    vector<int> lis;

    for (int x : arr) {
        auto it = lower_bound(lis.begin(), lis.end(), x); // Find position for x
        if (it == lis.end()) {
            lis.push_back(x); // Append to LIS if x is larger than all elements
        } else {
            *it = x; // Replace the element at that position
        }
    }
    
    return lis.size(); // Length of LIS
}
int32_t main() {
    fast_io;
     int n ; 
     cin>> n ; 
     vi arr(n) ; 
     for(auto & it : arr)cin>> it ; 
    //    cout <<  findAns(arr  , n);
   cout <<  longestIncreasingSubsequence(arr) ; 
}
