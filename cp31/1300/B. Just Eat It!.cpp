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
vi arr(n ) ; 
for(auto & it  : arr)cin>> it ; 
int ans = 0 ; 
int res = accumulate(arr.begin() , arr.end() , 0 ) ; 
int sum = 0 ; 
int cnt = 0 ; 
int maxcnt = 0  ;
// for(int i = 0 ; i< n ; i++){
//     if(sum <= 0){
//         sum = 0 ;
//         cnt= 0 ; 
//     }
//     sum+= arr[i] ;
//     cnt++ ; 
//     maxcnt = max(cnt , maxcnt) ; 
//     ans = max(ans , sum) ;

// }    
// if(sum == ans){
//     //  either both equal in len 
//     if(maxcnt == n ){
//         cout << "YES" << endl ;
//     }
//     else {
//         cout << "NO" << endl ;
//     }
// }
// else {
//     if(sum > ans){
//         cout << "YES" << endl ;
//     }
//     else {
//         cout << "NO" << endl ;
//     }
// }
// // cout << ans << " " << sum ; 
// return ; 


for(int i = 0 ; i< n ; i++)
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
