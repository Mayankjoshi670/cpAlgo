#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
int calculate(int a1, int a2, int a3, int a4, int a5) {
    int cnt = 0;
  if(a1+a2 == a3)cnt++;
    if(a2+a3 == a4)cnt++;
    if(a3+a4 == a5)cnt++;
    
    return cnt;
}
void findAns() {
    int a , b , c,d ; 
    cin>> a >> b >> c >> d ;
    int maxi = 0 ; 
    for(int i = -200 ; i<= 200 ; i++){
        maxi = max(maxi , calculate(a , b, i ,c, d)) ; 
    }
    cout<< maxi <<"\n";
}

int32_t main() {
    fast_io;
        int t; 
        cin>>t ; 
        while(t-->0){
            findAns();
        }
}
