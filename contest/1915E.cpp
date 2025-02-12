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
    vi arr(n) ; 
    
    for(int i = 0 ; i< n ; i++){
        int no ; 
        cin>> no ; 
        if(i%2){
            arr[i] = -1* no ; 
        }
        else {
            arr[i] = no ;
        }
    }
    map<int , int>mpp ; 
 
    int sum = 0 ; 
    mpp[0]  = 1 ; 
    for(int i = 0 ; i< n ; i++){
       int it = arr[i] ; 
        sum+= it ; 
      mpp[sum]++ ; 
      if(mpp[sum]>= 2){
        cout << "YES"<<endl ; 
        return ;  
      }
    }
     
        cout << "NO"<<endl ; 
    
    
    return  ; 
    
}

int32_t main() {
    fast_io;
    int t; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
