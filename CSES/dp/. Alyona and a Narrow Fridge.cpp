#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
bool canWe(int mid , vi arr , int h){
    sort(rbegin(arr) , rend(arr)) ; 
    int cnt = 0 ;
    bool flag = true ; 
    int n = arr.size() ;  
    for(int i = 0 ; i< n ; i++){
        if(i+1 <n){
            //  we can take 2 values 
            if(max(arr[i] , arr[i+1]  )<= h ){
                cnt++ ; 
                h-= max(arr[i] , arr[i+1]) ; 
                i++ ; 
            }
            else {
                flag = false ; 
                break ; 
            }
        }
            else {
                //  meas we left with one value 
                if( arr[i] <= h ){
                    cnt++ ; 
                }
                else {
                    flag = false ; 
                    break ; 
                }
        }
    }
    if( flag)return true  ; 
    return false ; 

}
int findAns(int n , int k , vi & arr) {
    int l = 0 , r = n ; 
    int ans = -1 ; 
    while(l <=r){
        int mid = (l+r)>>1 ; 
        vi temp(arr.begin() , arr.begin()+mid)  ;   
        if(canWe(mid , temp , k )){
            ans = mid ; 
        l = mid+1 ;
        }
        else {
            r = mid-1 ; 
        }

    }
    cout << ans << '\n' ; 
}

int32_t main() {
    fast_io;
int n , k ; 
cin>> n>> k ; 
vi arr(n) ; 
for(auto & it : arr)cin>> it ; 

        findAns(n , k , arr);
    
}


 