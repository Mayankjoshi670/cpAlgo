#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
bool calculate(int no ){
    if(no <=1) return false  ; 
    if(no <= 3 ) return true  ; 
     if(no%2 == 0 || no %3 == 0 ){
        
        return false   ; 
    }
        for(int i = 5 ; i*1 < no ; i+= 6 ){
            if(no % i == 0 || no%(i+2) == 0 ){
                return false  ; 
            }
        }
        return true ; 
}
void findAns() {
    int no ; 
    cin>> no ; 
    if(calculate(no)){
        cout << "is prime " ; 

    }
    else {
        cout << "no prime " ; 
    }
   
}

int32_t main() {
    fast_io;
     
        findAns();
    
}
