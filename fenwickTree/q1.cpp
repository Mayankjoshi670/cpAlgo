/*
Question 1 Given array of size N and Q querries
Solve two type of quereies
Type1 : i x : replace ith index by value x
Type 2 : l r : find sum from l to r
Input :
N Q
N elemnts of array
Type i x / Type l r(Q lines)


Example :
5 4
3 4 5 6 3
2 2 4
1 2 6
2 2 4
2 1 5
Output : 
15
17
23


*/

//  first problem is to set value of ith index by x 
//  we know that the sum function will add to that index to make to able to 
// replace it with so no we can do this 
// update(i  , x-arr[i]) ; 

#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
const int N = 1e5 + 10 ;
int bit[N] ; 
// this function add x to ith index  
void update(int  i , int x){
    for(; i<= N ; i+= (i& -i)){
        bit[i] += x  ; 
    }
}

//  give sum of values from index 1 to i 
int add (int i ){
    int ans =  0 ; 
    for(; i>0  ; i-=(i& -i )){
        ans+= bit[i] ; 
    }
    return ans ; 
}
void findAns() {
    int n , q ;
    cin>> n>> q ; 
    vi arr(n+1) ;
    for(int i = 1 ; i<= n ; i++){
        cin>> arr[i]; 
    }
    //  create binary index tree 
        for(int i = 1 ; i<= n ; i++){
            update(i , arr[i]) ; 
        }


//  first problem is to set value of ith index by x 
//  we know that the sum function will add to that index to make to able to 
// replace it with so no we can do this 
// update(i  , x-arr[i]) ; 
//  bacause we know that the updte function add value to that ith index 

while(q--){
    int type , index , val ; 
    cin>> type >> index >> val; 
    if(type== 1){
        //  replace query ; 
        update(index , val - arr[index]) ; 
    }
    else {
        //  index = left ; 
    //  val = right ;
    cout << add(val) - add(index-1) <<'\n'; 
    }
}

}

int32_t main() {
    fast_io;
      findAns();
    
}


