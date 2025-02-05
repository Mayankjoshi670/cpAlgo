#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
// #define int long long int 
void findAns() {
    string given , target ; 
    cin>> given>> target;
    int n = given.length(); 
    int m = target.length();
    vi lastoccur  ; 
    int j = n-1 , i = m-1 ; 
    while(i>=0 and j>=0 ){
        if(target[i] ==given[j]){
            lastoccur.push_back(j);
            i-- ; 
        }
            j--;
    }
    if(i>= 0){
        cout << -1 << '\n' ; 
        return ; 
    }
    // reverse(lastoccur.begin(), lastoccur.end());
    // int ans = 0 ;
    // ans+= lastoccur[0] ;
    // for(int i = 1 ; i< lastoccur.size()-1 ; i++){
    //    int diff = lastoccur[i]- lastoccur[i-1] ;
    //    ans+= (diff + i) ;  
    // }
    // int temp = lastoccur.back() ; 
    // int nsize = given.size() ; 
    //  int zzz = nsize-temp - 1 ; 
    // cout << ans+(zzz* ); 
    int zz = lastoccur.size() +accumulate(lastoccur.begin(), lastoccur.end() , 0 ) ; 
    int resul = m*n + n - m - (m*(m-1)/2) -  zz;
    cout << resul << '\n' ;
}

int32_t main() {
    fast_io;
    int t; 
    cin>> t; 
    while(t-->0){
        findAns();

    }     
    
}
