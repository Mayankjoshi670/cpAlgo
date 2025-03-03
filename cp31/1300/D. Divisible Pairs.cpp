// #include<bits/stdc++.h>
// using namespace std;
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// #define vi vector<int>
// #define vvi vector<vector<int>>
// #define ll long long 
// #define int long long int 
// void findAns() {
//     int n , x , y ; 
//     cin>> n >> x>> y ; 
//     vi arr(n) ; 
//     for(auto & it : arr)cin>> it ; 
//     vi a(n) , b(n) ; 
//     for(int i = 0 ; i< n ; i++){
//         int num = arr[i] ; 
//         a[i] = num % x ;
//         b[i] = num % y ;
//     }
//     map<pair<int , int> , int>mpp ; 
//     int ans = 0 ; 
//     for(int i = 0 ; i< n ; i++){
//         int v1 = a[i] ; 
//         int v2 = b[i] ; 
//         ans += mpp[{(x - v1) % x , v2}];
//         mpp[{v1 , v2}]++ ;
//     }
//     cout << ans << '\n' ; 
//     return ; 
// }

// int32_t main() {
//     fast_io;
//      int t ; 
//      cin>> t ; 
//      while(t-->0){
//          findAns();
//      }
    
// }




#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {

    int n,k,p;
    cin >> n >> k >> p;
    
    int res = p*n ; 
    if(abs(k) > res) {
        cout << "-1" <<endl ;
        return;
    }
    
    else {
        cout << abs(k) / p + (abs(k) % p != 0) << endl ;
        return;
    }

}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
