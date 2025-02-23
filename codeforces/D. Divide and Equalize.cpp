#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void getPrime(unordered_map<int  ,int >& mpp , int n ){
    if(n <= 1 ) return ;  
    while(n%2 == 0 ){
        mpp[2]++ ; 
        n/= 2 ; 
    }
    for(int i = 3 ; i*i<= n ; i++ ){
        while(n%i== 0 ){
            mpp[i]++ ; 
            n/= i ;
        }
    }
    if(n >1){
        mpp[n]++ ; 
    }
}
void findAns() {

    int n ; 
    cin>> n ; 
    vi arr(n) ; 
    for(auto & it : arr)cin>> it ; 
    unordered_map<int , int>mpp ; 
    for(int i =0 ; i< n ; i++){
        getPrime(mpp , arr[i]) ; 
    }

    for(auto it : mpp){
        if(it.second  % n  != 0 ){
            cout << "NO\n";
            return ;
        }
    }
    cout << "YES\n" ; 
    return ; 
}

int32_t main() {
    fast_io;
    int t; 
    cin>> t; 
    while(t-->0){
        findAns();
    }     
    
}
