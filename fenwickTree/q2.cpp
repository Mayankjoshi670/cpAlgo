/*
Question 2 find inversion count of array
Input :
N
N elemnts of array

Example :
5
8 4 9 2 8
Output : 
5

Large input : 
5
100000000 10000 10000000000 10 100000000
Output : 
5
*/

#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
const int N = 1e5+10 ; 
int bit[N] ;  
int sum(int i ){
    int ans = 0 ;
    for(; i>0;i-=(i&-i)){
        ans+= bit[i] ; 
    } 
    return ans ; 

 }
 void  update(int i , int x ){
    for(; i< N ; i+=(i& -i)){
        bit[i]+= x ; 
    }
 }

void findAns() {    
    int n ; 
    cin>> n ; 
    vi arr(n+1) ;  
    for(int i = 1 ; i<= n ; i++){
        cin>> arr[i] ; 
    } 
    int invCnt =  0 ; 
    for(int i = 1 ; i<= n ; i++){
        invCnt+= (sum(N)  - sum(arr[i])) ; 
        update(arr[i] , 1 ) ; 
    }
    cout << invCnt <<'\n' ; 

}

int32_t main() {
    fast_io;
     
        findAns();
    
}
