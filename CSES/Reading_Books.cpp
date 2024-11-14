#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    int n ; 
    cin>> n ; 
    vi arr(n) ; 
    for(auto & it : arr)cin>> it ; 
    sort(begin(arr), end(arr)) ; 
    int maxi = *max_element(begin(arr) ,end(arr)) ; 
    int sum = accumulate(begin(arr) , end(arr) , 0LL) ; 
    cout << max(sum , maxi*2) ;     
}

int32_t main() {
    fast_io;
     
        findAns();
    
}
