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
    int mid = n/2 ;
    int ans = 0 ; 
    for(auto it : arr){
        ans+= abs(arr[mid]- it)  ;
    }
    cout << ans ; 
        }


int32_t main() {
    fast_io;
     
        findAns();
    
}
