#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    int k , m ; 
    cin>> k >> m ; 
    string s; 
    cin>> s ; 
    int cnt = count(s.begin() , s.end() , 'S') ; 
    if(cnt >=m){
        cout << k << endl ; 
    return ; 
    }
    
    cout << k+m -cnt-1<<endl  ; 
    return ; 

}

int32_t main() {
    fast_io;
    int t ; 
    cin>> t ; 
    while(t-->0){

        findAns();
    }     
    
}
