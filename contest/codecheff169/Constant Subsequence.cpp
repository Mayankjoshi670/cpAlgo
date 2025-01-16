#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
bool isPossible(vi & pos , vi &neg  , int mid   ){
int n = pos.size() ; 
int m = neg.size() ;
int i = 0 , j = 0 ; 
int sum = 0 ; 
while(i < n && j < m){
   if(sum+ pos[i]>mid){
    //  add negative to it 
    sum+= neg[j] ; 
    j++ ;
    sum =  max(sum , 0LL ) ; 

   }
   else {
    sum+=pos[i] ; 
    i++;
   }
}
    if(i< n ){
        //  means negative values are ended so we can't  decrease from here
        while(i< n ){
        sum+=pos[i] ;
        i++ ;
        if(sum >mid)return false ;
        }
    }
 return true ; 
}
void findAns() {
    int n ; 
    cin>> n ; 
    vi pos , neg ; 
    for(int i = 0 ; i<n ; i++){
        int no ;
         cin>>no ; 
        if(no>=0)pos.push_back(no); 
        else neg.push_back(no);
    }
    int low = 0 ; 
    int high = LLONG_MAX ;
    int ans = 0 ; 
    if(pos.empty()){
        cout <<0 << endl ; 
        return  ; 
    }
    while(low <= high ){
        int mid = (low+high )>>1 ; 
        if(isPossible(pos , neg , mid   )){
            ans = mid ;
            high = mid -1 ;
        }
        else{
            low = mid +1 ; 
        }
    } 
    cout << ans << endl ;

}

int32_t main() {
    fast_io;
    int t ; 
    cin>>t ; 
    while(t-->0){     
        findAns();
    }
}
