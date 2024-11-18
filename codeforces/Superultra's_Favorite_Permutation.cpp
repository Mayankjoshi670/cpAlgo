#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 


void findAns() {
    int n; 
    cin >> n; 
    vi arr; 

    if(n <= 4 ){
        cout << -1 << '\n'  ; 
        return  ; 
    }    
    for (int i = 2; i <= n; i += 2) {
        arr.push_back(i); 
    }
    for (int i = 1; i <= n; i += 2) {
        arr.push_back(i); 
    }
    int mid = n/2 ; 
    swap(arr[mid-1] , arr[1])  ; 
    swap(arr[mid]  , arr[mid+2]) ; 

    for(auto it : arr){
        cout << it << " "; 
            }
cout<< '\n' ; 
   
}

int32_t main() {
    fast_io;
    int t; 
    cin >> t; 
    while (t-- > 0) {
        findAns();
    }
}
