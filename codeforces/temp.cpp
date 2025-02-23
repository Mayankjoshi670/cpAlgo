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
vi arr(n) ; ;
    unordered_map<int , int>mpp ;  
    for(auto it  : arr){
        mpp[it]++ ; 
    }
    int cntA = 0 ; 
    int cntR = 0 ; 
    for(auto it : mpp){
        if(it.second >=4){
            cntA+= it.second/4 ; 
            it.second/= 4  ; 
            if(it.second == 2){
                cntR++ ; 
            }
        }
        else {
            cntR+= 1 ; 
        } 
    }
    int rectangle = cntR/2 ; 
    cout <<   abs(cntA - rectangle) ; 

}

int32_t main() {
    fast_io;
     int t; 
     cin>>t ; 
     while(t-->0){
         findAns();
     }
    
}
