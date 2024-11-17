#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpi vector<pair<int , int>> 
#define ll long long 
#define int long long int 
void findAns() {
    int n , k ; 
    cin>> n >> k; 
    vi arr(n) ; 
    for(auto & it : arr)cin>> it ; 
    sort(begin(arr), end(arr)) ; 
    vi ans(n, 0 ) ;
    ans[0] = arr[0] ; 
    prefix[]
    vi prefix(n) ;

    for(int i =  1 ; i< k ; i++){
        ans[i] = arr[i]+ans[i-1] ; 
    }
    for(int i = k ; i< n ; i++){
        int  free  = k/k ;
        int toBuy = i - k ; 
         
            }
    
    
    }

int32_t main() {
    fast_io;
    int t ; 
    cin>> t ; 
    while(t-->0){
    findAns();

    }
}
