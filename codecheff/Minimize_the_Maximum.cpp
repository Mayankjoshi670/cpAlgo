#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
bool isPossible(vi &arr ,int mid , int n ){
int sum = 0 ; 
for(int i =1 ; i< n ; i++){
    if(arr[i]> mid ){
        sum+= (arr[i] - mid) ; 
    }
    else {
        sum-= (mid - arr[i]) ; 
    }
}
int total =arr[0]+ sum ;  
if( total  <= mid and total >= 0  ) return true ; 
return false ; 
}
void findAns() {
    int n ; 
    cin>> n ; 
    vi arr(n) ; 
    for(auto & it :arr)cin>> it ; 
    int high = *max_element(begin(arr) , end(arr)) ; 
    int maxElem = high ; 
    int low = 1 ; 
    int ans = -1 ; 
    while(low<= high ){
        int mid  = (low+ high)>> 1 ; 
        if(isPossible( arr , mid , n )){
            ans = mid ; 
            high = mid- 1 ; 
        }
        else {
            low = mid+1 ; 
        }
    }
    if(ans == -1){
        cout << maxElem<<'\n' ; 
    } 
    else {
        cout << max( ans , arr[0])  << '\n' ; 
    }
     
}

int32_t main() {
    fast_io;
     int t ; 
     cin>> t ; 
     while(t-->0 ){
        findAns();
     }
    
}
