#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    int n , m ; 
    cin>> n >>  m  ; 
    
    vector<pair<int , int>>vpi ;
    for(int i = 0 ; i< n ; i++){
        int a , b ; 
        cin>> a >> b ;
        vpi.push_back({a , b}) ;
    }
    sort(begin(vpi) , end(vpi)) ; 
    int x = vpi[0].first+m ; 
    int y = vpi[0].second +m;
    int total = 0 ;  
    for(int i = 1 ; i < n ; i++){
        total+=(abs(x- vpi[i].first)*abs(y-vpi[i].second)) ; 
    }
    cout << 4*(n*m - total) << endl;
    // for(auto it : vpi){
    //     cout << it.first << " "<< it.second << endl;
    // }
}

int32_t main() {
    fast_io;
    int t ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
