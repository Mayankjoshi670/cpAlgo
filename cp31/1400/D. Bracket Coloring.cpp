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
    string s; 
    cin>> s; 
    if(n%2){
        cout << -1 << '\n' ; 
        return ; 
    }
    stack<char> st1 , st2 ; 
//  starts with open bracket '(' for the st1 
//  starts with close bracket ')' for the st2
int color1 = 0 , color2 = 0 ; 
vi res ;     
for(int i = 0  ; i< n ; i++){
        char ch = s[i] ; 
        if(ch == '(') {
        if(!st2.empty() and st2.top() == ')'){
            res.push_back(2) ; 
            st2.pop() ;
            color1++ ;  
        }
        else {
            st1.push('(') ; 
            res.push_back(1) ; 
            color2++ ;
        }

    }
        else {
            //  ) 
            if(!st1.empty() and st1.top() == '('){
            st1.pop() ; 
            res.push_back(1) ;           
            }
            else {
                st2.push(')') ;
                res.push_back(2) ;
            }
        }
 
}
if(st1.empty() && st2.empty()) {
    if(color1 && color2) {
        cout << 2 << '\n' ; 
    }
    else {
        cout << 1 << '\n' ; 

    }
    for(int i = 0 ; i< n ; i++){
        if(color1 && color2){
            cout << res[i] << " "; 
        }
        else {
            cout << 1 << " ";
        }
        
    } 
    cout << '\n' ;
}
else {
    cout << -1 << '\n' ; 
}
return ; 
}

int32_t main() {
    fast_io;
    int t; 
    cin>> t; 
    while(t-- > 0){
        findAns();
    }     
    
}
