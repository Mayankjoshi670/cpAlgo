#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
int n , k  ;
int cnt = 0 ;  
cin>> n >> k ; 
    vvi arr ; 
    for(int i = 0 ; i< n ; i++){
        int a , b; 
        cin>> a >> b ; 
        arr.push_back({a , b}) ; 
    }
    // sort(begin(arr) , end(arr) , [](pair<int ,int>& a , pair<int , int>&b){
    //     if(a.first)
    // } );
    sort(begin(arr) , end(arr))  ;
    multiset<int>st ; 
    for(int i= 0 ; i< k ; i++){
        st.insert(arr[i][1]); 
    }
    for(int i = k ; i < n ; i++){
        auto mini = st.begin() ; 
        auto maxi = st.rbegin() ; 
        if(arr[i][0]>= (*mini)){
            cnt++ ; 
            st.erase(mini) ; 
            st.insert(arr[i][1]) ; 
        }
        else if (arr[i][1] < (*maxi )){
            st.erase(st.find(*maxi)) ;
            // st.erase((*maxi)); 
            st.insert(arr[i][1]) ; 
        }
        
    }
    cout <<cnt+ st.size()   ; 

}

int32_t main() {
    fast_io;
     
        findAns();
    
}
