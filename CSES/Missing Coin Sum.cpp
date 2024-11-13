#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    int n ; 
    cin>> n; 
    vi arr(n) ; 
    for(auto & it : arr)cin>> it ; 
    sort(begin(arr) , end(arr)) ; 
    int x = 1 ; 
    for(auto it : arr){
        if(it>x){
           cout <<x ; 
           return  ;
        }
        x+= it ; 
    }
    cout << x ; 
    return  ; 
}

int32_t main() {
    fast_io;
     
        findAns();
    
}
