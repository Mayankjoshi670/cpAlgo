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
int  k = n/2 ; 
cout << ((n%2 ==1) ?2*(k+1)*(k+2) : (k+1)*(k+1)) <<endl;     
}

int32_t main() {
    fast_io;
     
        findAns();
    
}
