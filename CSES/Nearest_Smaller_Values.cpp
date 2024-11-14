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
    vi arr(n) ; 
    for(auto & it : arr)cin>> it ; 
    stack<int>st ; 
    for(int i = 0 ; i< n ; i++){
        while(!st.empty() and arr[st.top()]>= arr[i]){
            st.pop() ; 
        }
        if(st.empty()){
            cout << 0 <<  " " ;
        }
        else {
            cout << st.top()+1<<" " ; 
        }
        st.push(i) ; 
    }

}

int32_t main() {
    fast_io;
    findAns();    
}
