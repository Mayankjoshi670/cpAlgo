#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
int n , m ; 
cin>>n >> m ; 
int cnt2= 0 , cnt5 = 0 ; 
int temp = n ; 
while(n%2 == 0 ){
    cnt2++ ; 
    n/= 2 ; 
}

while(n%5 == 0 ){
    cnt5++ ; 
    n/= 5 ; 
}

int k = 1 ; 
if(cnt2> cnt5){
    for(int i = 0 ; i< cnt2 - cnt5  and k*5 <= m ; i++){
        k*= 5 ; 
    }
}
else {
    for(int i = 0 ; i < cnt5 - cnt2 and k*2 <= m ; i++){
        k*= 2 ; 
    }
}
while(k*10 <= m ){
    k*= 10 ; 
}
cout << (m/k)*k *temp << endl ; 
 
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
