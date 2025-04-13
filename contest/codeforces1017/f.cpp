#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    int n , m , k ; 
    cin>>n >> m >>  k ; 
    if(m%k == 0 ){
        //  do cyclic shifts 
        for(int i =0 ; i< n ; i++){
            for(int j = 0 ; j < m ; j++){
                cout << (j+i)% k+1 << " " ; 
            }
            cout << '\n' ; 
        }
    }
    else {
        for(int i = 0 ; i< n ; i++){
            for(int j = 0 ; j< m ; j++){

                cout << 1+(m*i+j)%k <<" " ; 
            }
            cout <<'\n' ; 
        }
    }
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
