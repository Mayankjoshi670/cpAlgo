#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void executeQuery(vector<pair<int , int>>&vpi , int k , int cnt ){
   int n = vpi.size() ; 
    while(k-->0 ){
    int a , b; 
        cin>> a >> b  ; 
        swap(vpi[a].second , vpi[b].second); 
        //  prev values 
        if(a>=1 and a+1 <= n  and vpi[a].second > vpi[a-1].second){
            cnt--  ;
        }
        if(b >= 1 and b+1 <= n and vpi[b].second > vpi[b-1].second ){
            cnt-- ; 
        }
        //  next values 

        if(  b >=  0 and b+1 <= n and vpi[b].second < vpi[b+1].second ){
            cnt-- ; 
        }
         if(  a>=  0 and a+1 <= n and vpi[a].second < vpi[a+1].second ){
            cnt-- ; 
        }       


    }


}
void findAns() {
    int n , k; 
    cin>> n>>k ; 
    vi arr(n) ; 
    for(auto & it : arr)cin>> it ; 
    int cnt = 1 ; 
    vector<pair<int , int>>vpi ; 
    for(int _= 0 ; _ < n ; _++){
        vpi.push_back({arr[_] , _}) ; 
    }    
    sort(begin(arr) , end(arr));
   int cnt = 1 , prev = -1 ; 
    for(auto it : vpi){
        int val = it.second ; 
        if(val > prev){
            prev = val ; 
            continue; 
        }
        else {
            cnt++ ; 
            prev = val ; 
        }
    }
    executeQuery(vpi , k , cnt ) ; 
}

int32_t main() {
    fast_io;
    findAns();
    
}
