#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
bool check(int x , int n , vi &arr , int k ){
    int mid = n>>1 ;
    int sum = 0 ;  
    for(int i = mid ; i< arr.size() ;i++){
        if(x- arr[i]>0  ){
            sum+= x-arr[i] ; 
        }
        if(sum>k ) return false ; 
        
    }
    if(sum <= k )return true ; 
 return false ; 
}
void findAns() {
   int n , k ;
   cin>> n >> k ; 
    vi arr(n); 
    for(auto &it : arr)cin>> it ;
  sort(begin(arr) , end(arr)) ; 
    int m = n>>1 ;
    int low = arr[m] ; 
    int high = arr[n-1]+ k ; 
    int ans = -1 ; 
    while(low <= high ){
        int mid = (low+high)>>1 ; 
        if(check(mid , n , arr , k )){
           ans = mid ;
            low = mid+1 ; 
        }
        else{
            high = mid-1 ; 
        }
    }
    cout <<  ans<<'\n' ; 
 
}

int32_t main() {
    fast_io;
     
        findAns();
    
}
