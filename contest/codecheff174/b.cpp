#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
   int n ; 
   cin >> n ; 
    vi arr(n) ;
    for(auto & it : arr)cin >> it ; 
    vi temp = arr ; 
    if( n ==2 ){
        temp[0] = max(0LL , arr[0] - arr[1]) ; 
        temp[1] = max(0LL , arr[1] - arr[0]) ;  
    }
    if( n == 3){
        temp[1] = max( 0LL  , arr[1] - (arr[0] + arr[2])) ; 
    }
    if( n >3){
        temp[n-2] = max(0LL , arr[n-2]- arr[n-1]) ; 
        temp[1] = max(0LL , arr[1] - arr[0]) ; 
    }
    int res = *max_element(begin(temp) , end(temp)) ; 
    cout << res << endl;
    return ;
}

int32_t main() {
    fast_io;
    int t; 
    cin>> t ; 
    while (t-->0)
    {
        findAns();
    }
         
    
}
