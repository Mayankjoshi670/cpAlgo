#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
bool canWe(vi & arr , int n , int mid , int k ){
    int cnt = 0; 
    for(int i = 0 ; i< n ; i++){
        cnt+= mid/arr[i] ; 
    }
    if(cnt >= k )return true ; 
    return false ; 
}
void findAns() {
    int n, k ; 
    cin>> n >> k ;
    vi arr(n); 
    for(auto & it : arr)cin>> it ; 
    int low = 1 ; 
    int ans = -1 ; 
    int high = k* (*min_element(begin(arr) , end(arr))) ; 
    while(low <= high ){
        int mid = (low+high)>>1 ; 
        if(canWe(arr  , n , mid , k  )){
            ans = mid ; 
            high = mid- 1 ;
        }
        else {
            low = mid+1 ; 
        }
    }
    cout << ans ; 
}

int32_t main() {
    fast_io;
    findAns();    
}

