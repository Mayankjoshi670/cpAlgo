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
int maxi = 0 , cnt = 0 ; 
for(auto it : s){
    if(it == '0'){
        cnt++ ; 
    }
    else{
        maxi = max(maxi , cnt+1) ; 
    }
} 
cout << s.size() - maxi<<'\n' ; 
return ; 

}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
