#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
int cache[20][10][2]  ; 
int solve(int idx  , int cnt , bool isSmaller , string & limit){
    if(cnt > 3) return 0 ; 
    int n = limit.length() ;
    if(idx == n ) return 1 ; 
    int ans = 0 ; 
    if(cache[idx][cnt][isSmaller]!= -1) return cache[idx][cnt][isSmaller] ;
    //  for value is 0 because we cant go smaller then this 
    //  and if it is zero then we dont need to increment cnt
    //  we are calulating this because this is special case 
    //  because 0 dont add any thing to cnt so it should handled seprately  
    ans+= solve(idx+1 , cnt , isSmaller?isSmaller: (limit[idx]!='0') , limit) ; 
    if(isSmaller){
        // cout <<"inside isSmaller function " ; 
        //  still smaller then we can take any value from 0 to 9 
        ans+= 9*solve(idx+1 , cnt+1 , 1, limit) ; 
    }
    else{
        //  not smaller can be equal or greater 
        int lesser = (limit[idx]-'0')-1 ; 
        if(lesser>=0) ans+= lesser*solve(idx+1 , cnt+1 , 1 , limit) ; 
        if(limit[idx]!= '0') ans+= solve(idx+1 , cnt+1 ,  0 , limit)   ;
    }
    return cache[idx][cnt][isSmaller]=  ans ; 

}
void findAns() {
int l, r ; 
cin>>l >> r ; 
string temp1 = to_string(r) ; 
string temp2 = to_string(l-1)  ;
memset(cache , -1  , sizeof(cache)) ;
int res1 = solve(0 , 0 , 0 , temp1) ; 
memset(cache , -1  , sizeof(cache)) ; 
int res2 = solve(0 ,0 , 0 , temp2); 
int ans = res1 - res2  ;     
    cout << ans << '\n' ; 
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
