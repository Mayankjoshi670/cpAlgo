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
    vvi arr ; 
    for(int i = 0 ; i< n ; i++){
        int a , b ; 
        cin>> a >> b ;
        arr.push_back({a, b}); 
    }
    sort(begin(arr) , end(arr) , [](vi & A , vi &B){
        return(A[0]+A[1]< B[0]+B[1]) ; 
    });

    for(int i = 0 ; i< n ; i++){
        cout << arr[i][0] <<" "<< arr[i][1]<<" ";
    }
    cout << '\n' ; 
   
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
