#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
#define vpi vector<pair<int , int>>
#define nl '\n'
bool canWe(vpi & a , int k ){
    int l = 0 , r = k ; 
    for(int i = 0 ; i< a.size() ; i++){
        if(a[i].first > r || a[i].second < l)return false  ;
        l = max(a[i].first , l ) ; 
        r  = min(a[i].second , r ) ; 
        l = max(0LL , l- k ) ; 
        r = r+ k ; 
    }  
    return true ; 
}
void findAns() {
    int n ; 
    cin>> n ; 
    vpi a(n) ; 
    for(int i = 0 ; i< n ; i++){
        int b, c ; 
        cin>> b >> c ; 
        a.push_back({b , c}) ; 
    }  


    int low = 0 ; 
    int high = INT_MAX ; 
    int ans = 0 ; 
    while (low<= high)
    {
        int mid = (low+ high)>>1 ;
        if(canWe(  a , mid )){
            ans = mid ;
            high  = mid -1 ;  
        }  
        else{
            low = mid+1 ; 
        }
    }
    cout << ans << nl ;  
    
}

int32_t main() {
    fast_io;
     int t; 
     cin>> t; 
     while(t-->0){
         findAns();
     }
    
}
