#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    int n , m , k; 
    cin>> n >> m >> k ;
    vi appartment(n) ,Size(m) ;
    for(auto &it :appartment )cin>> it;  
    for(auto & it : Size)cin>> it ; 
    sort(begin(appartment) , end(appartment)) ; 
    sort(begin(Size) , end(Size)) ;
    int  i = 0 , j = 0 ; 
    int cnt = 0 ; 
    while(i < n and j < m ){
        if(abs(appartment[i]- Size[j])<= k ){
            cnt++ ; 
            i++ , j++ ; 
        }
        else if(appartment[i]> Size[j]){
            j++ ; 
        }
        else {
            i++ ; 
        }
    } 
    cout << cnt ; 
}

int32_t main() {
    fast_io;
     
        findAns();
    
}
