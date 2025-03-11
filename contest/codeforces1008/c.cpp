#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
 int a ; 
 cin >> a ;
 int n = 2*a  ;  
 vi arr(n) ; 
 for(auto & it : arr)cin>> it ; 
    sort(begin(arr) , end(arr)) ; 
    int sumA = accumulate(arr.begin() , arr.begin()+a , 0LL ) ; 
    int sumB = accumulate(arr.begin()+a , arr.end() , 0LL ) ;
    int tempres  =  abs(sumB - sumA) ;
    if() 
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
