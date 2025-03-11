#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    int n , k ; 
    cin>> n>>  k ; 
    vi res(n+1) ; 
    if(k%2){
        //  means n is odd the me need to put all to n 
        for(int i = 1 ; i<= n ; i++){
            res[i] = n ; 
        }
    }
    else {
        //  n is even we need to go to n-1 so the it will automatically do his job 
        for(int i = 1 ; i<= n ; i++){
            res[i] = n-1 ; 
        }

    }
    res[n-1] = n ; 
    res[n] = n-1 ; 

    for(int i = 1 ; i <= n ; i++){
        cout<<res[i]<<" ";
    }
    cout<<"\n";
    return;
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
