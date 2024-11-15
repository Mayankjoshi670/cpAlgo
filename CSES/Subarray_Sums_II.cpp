// #include<bits/stdc++.h>
// using namespace std;
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// #define vi vector<int>
// #define vvi vector<vector<int>>
// #define ll long long 
// #define int long long int 
// void findAns() {
//     int n, k ; 
//     cin>> n >> k ; 
//     vi arr(n) ; 
//     for(auto & it : arr)cin>> it ; 
//     unordered_map<int , int>mpp ;
//     mpp[0] = 1 ;
//     int sum = 0 ;  
//     for(auto it : arr){
//         sum+= it ;
//         mpp[it]++ ; 
//     } 
//     int ans = 0 ; 
//     for(auto it : mpp){
//         int x = k - it.first  ;
//         if(mpp[x]){
//         ans+= mpp[x] ;         
//         }
//     }
//     cout << ans  ; 
// }

// int32_t main() {
//     fast_io;
//     findAns();  
// }


#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

void findAns() {
    int n, k ; 
    cin >> n >> k ; 
    vi arr(n) ; 
    for(auto & it : arr) cin >> it ; 
    map<int , int> mpp ;
    mpp[0] = 1 ;
    int sum = 0 ;  
    int ans = 0 ;  
    for(int i = 0 ; i< n; i++){
        sum+= arr[i] ; 
        ans += mpp[sum - k  ] ; 
        mpp[sum ]++ ; 
    }
    cout << ans  ; 
}

int32_t main() {
    fast_io;
    findAns();  
}