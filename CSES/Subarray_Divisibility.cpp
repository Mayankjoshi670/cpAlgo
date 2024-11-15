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
        map<int , int>mpp  ; 
        int rem  = 0 ;
        mpp[0] = 1;  
        int cnt = 0 ; 
        for(int i = 0 ; i< n ; i++){
            rem  = ((rem +  arr[i])%n + n )%n ;  
            cnt+= mpp[rem]  ; 
            mpp[rem]++ ;  
              
        }
        cout << cnt ; 
}

int32_t main() {
    fast_io;
    findAns();    
}
