
#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 


int maxi(int x ,int  y){
    if(x%2 && y%2){
        //  2 are odd then we nedd to subtract 1 
        return (x-1)+(y-1)+1 ; 
    }
    //  else  we get total of both  
    return x+y ; 
}
void findAns() {
    int a , b , c ; 
    cin>> a>> b >> c ; 
    int ans1 = maxi(a , b) ; 
    int ans2 = maxi(b , c) ;
    int ans3 = maxi(c , a) ;

    cout << min({ans1 , ans2 , ans3})<<'\n' ; 
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
