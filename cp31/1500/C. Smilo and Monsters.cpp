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
    vi temp(n) ; 
    for(auto &it : temp)cin>> it ;
    int total = accumulate(begin(temp) , end(temp) , 0LL) ; 
    sort(begin(temp) , end(temp)) ; 
    int i = 0 , sum = 0 ; 
    for(; i< n ; i++){
        sum+= temp[i] ;
        if(sum > (total+1)/2)break ;  
    }     
    cout << ((total+1)/2)+n-i<<'\n' ; 
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
