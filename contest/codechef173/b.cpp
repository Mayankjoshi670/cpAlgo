 


// Cool Subsequences
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
// #define int long long int 

void findAns() {
    int n;
    cin>>n;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    
    bool poss=false;
    for(int i=0;i<n;i++){
        if(mp[arr[i]]>1){
            poss=true;
            cout<<1<<endl;
            cout<<arr[i]<<endl;
            break;
        }
    }
    
    if(poss==false)
    cout<<-1<<endl;
    
}
int main() {
    fast_io;
    int t; 
    cin >> t;
    
    while (t-- > 0) {
        findAns();
    }
    
    return 0;
}
