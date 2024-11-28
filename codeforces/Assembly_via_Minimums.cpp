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
    int x = (n*(n-1))/2;
    vi arr(x); 
    for(auto & it : arr)cin>> it ; 
    sort(begin(arr) , end(arr)) ; 
    for(int i = 0 ; i< x ; i+= --n){
        cout<< arr[i] <<" " ; 

    }
    cout << 1000000000 << '\n'  ; 
    return ; 
}

int32_t main() {
    fast_io;
     int t; 
     cin>> t; 
     while(t-->0 ){
        findAns();
     }
    
}
