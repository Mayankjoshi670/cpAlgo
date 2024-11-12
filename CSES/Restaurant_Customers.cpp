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
    vector<pair<int , int >>arr(n) ;
    for(int i = 0; i< n ; i++){
        int a , b ; 
        cin>> a>> b; 
        arr.push_back({a , 1}) ; 
        arr.push_back({b ,-1}) ; 
    }
    sort(begin(arr) , end(arr)) ; 
    int maxi = 0 ; 
    int cnt = 0  ;
    for(auto it : arr){
        cnt+=it.second ;
        maxi = max(maxi , cnt) ; 
    }
    cout << maxi ; 
}

int32_t main() {
    fast_io;
     
        findAns();
    
}
