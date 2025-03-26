#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
string s ; 
cin>> s ; 
int wcnt = 0  , breakRes = 0  , ans = 0 ; 
for(int i = 0 ; i< s.size() ; i++){
    if(s[i] == 'o'){
        breakRes +=wcnt ; 
    }
    else if (i > 0 and s[i-1] == 'v') {
        wcnt++ ; 
        ans+= breakRes ; 
    }

}   
cout << ans << endl  ;  
}

int32_t main() {
    fast_io;
     
        findAns();
    
}
