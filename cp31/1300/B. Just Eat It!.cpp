#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int
int solve(vi &given , int n ){
    int maxi = LLONG_MIN , ans = LLONG_MIN ; 
    for(int i = 0  ; i< n ; i++){
        maxi = max(maxi , 0LL)+given[i];
        ans = max(ans ,maxi) ;
    }
    return ans ;
}
 

void findAns() {
    int n;
    cin >> n;
    vi given(n);
    for (auto &it : given) cin >> it;

    ll total = accumulate(given.begin(), given.end(), 0LL);
    ll maxSubarray = solve(given, n-1);
    reverse(begin(given) , end(given)) ; 
maxSubarray = max(maxSubarray , solve(given , n -1)) ;
    cout << ((total > maxSubarray) ? "YES\n" : "NO\n");
}


int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
