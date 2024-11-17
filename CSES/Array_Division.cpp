#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int
bool isPossible(int mid ,vi & arr , int n , int k ){
   int sum = 0 ; 
   int cnt = 1 ; 
    for(int i = 0 ; i< n ; i++){
        if(arr[i]> mid) return false ; 
        if(sum+ arr[i]> mid){
            cnt++ ; 
            sum = arr[i] ; 
        }else {
            sum+= arr[i] ;
        }

    } 
    return cnt  <= k ; 
} 
void findAns() {
int n , k ; 
cin>> n >> k ;  
  vi arr(n) ;
  for(auto & it : arr)cin>> it ; 
  int low = 0 ; 
  int high = accumulate(begin(arr) , end(arr) , 0LL) ; 
    int ans = 0 ; 
    while (low <= high )
    {
        int  mid = (low+high )>>1 ; 
        if(isPossible(mid , arr , n , k )){
            ans = mid ; 
            high = mid -1 ; 
        }
        else {
            low = mid+1 ; 
        }
        
    }
    cout << ans ; 
    
}

int32_t main() {
    fast_io;
     
        findAns();
    
}
