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
    string s; 
    cin>> s ; 
    int a = 0 , b = 0 ; 
    int ans = 0; 
    for(int i = n-1 ; i>= 0 ; i--){
        if(s[i] == 'A'){
            if(b>0)b--;
            else ans++ ; 
            a++; 
        }
        else {
            if(a>0 )a-- ; 
            else ans++ ; 
            b++ ; 
        }
    }
    cout << ans << '\n' ; 
    return  ; 

}

int32_t main() {
    fast_io;
    int t ; 
    cin >> t ; 
    while(t-->0){
        findAns();

    }     
    
}
