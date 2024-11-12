#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    int n; 
    cin>> n ; 
  queue<int>q ; 
for(int i= 1 ; i<= n ; i++)q.push(i) ; 
    bool flag = false ; 
    
    while(!q.empty()){
        int no = q.front() ; 
        q.pop(); 
        if(flag){
            cout << no<<" " ; 
        }
        else q.push(no) ; 
        flag= !flag ; 
    }
    return ; 
}

int32_t main() {
    fast_io;
    findAns();    
}
