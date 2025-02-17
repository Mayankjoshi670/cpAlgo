#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
int countTotalDigits(int n ){
    int cnt = 0; 
    while(n>0){
        n/=10 ; 
        cnt++ ; 
    }
    return cnt ; 
}

int countZerosAtEnd(int n){
    int cnt = 0 ; 
    while(n > 0 ){
        if(n%10!= 0 )break ; 
        n/=10 ;
        cnt++ ; 
    }
    return cnt ; 
}
void findAns() {
    int n, m ; 
    cin >> n>> m;
    int cnt = 0 ; 
    vi arr(n), temp(n) ; 
    for(int i = 0 ; i< n ; i++){
        cin>> arr[i] ; 
        cnt+= countTotalDigits(arr[i]) ; 
        temp[i] = countZerosAtEnd(arr[i]) ; 
    }
    sort(rbegin(temp) , rend(temp)) ; 
    int zeroesRemoves = 0 ; 
    for(int i = 0 ; i < n ; i+= 2){
        zeroesRemoves += temp[i] ;
    }
    if(cnt-zeroesRemoves >=(m+1)){
        cout << "Sasha"<<'\n'  ; 
        return ;  
    }
    cout << "Anna"<<'\n' ; 
}

int32_t main() {
    fast_io;
    int t; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
