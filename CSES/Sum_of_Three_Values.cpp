#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
#define vpi vector<pair<int , int>>
void findAns() {
    int n , x; 
    cin>> n >> x ;
     vpi arr ; 
    //  for(auto & it : arr)cin>> it ; 
    for(int i = 0 ; i< n; i++){
        int no ; 
        cin>> no ; 
        arr.push_back({no , i }) ; 
    }
     sort(begin(arr) , end(arr)); 
     for(int i = 0 ; i< n-2 ; i++){
        int j = i+1 ; 
        int k = n-1 ; 
        int target = x -  arr[i].first ; 
        while(j< k ){
            if(arr[j].first + arr[k].first< target )j++ ; 
            else {
                k-- ; 
            }

        }
     }
}

int32_t main() {
    fast_io; 
    findAns();  
}
