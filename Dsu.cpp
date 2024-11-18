#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
// const int N = 1e5+10 ; 
// int parent[N] ;
// int Size[N] ;  
// void make (int v){
// parent[v] = v ;
// Size[v] = 1 ;  
// }
// int Find(int v){
// if(v == parent[v]) return v ; 
// //  path compression 
// return parent[v] =  Find(parent[v]) ; 
// }
// void Union(int a , int b ){
//     a = Find(a) ; 
//     b = Find(b) ; 
//     if(a != b){
// // uniun by size 

//         //  not  have a same parent 
//     //  we wana add smaller tree to bigger tree so to make it optimal to do so we add left one to right 
//     if(Size[a]<Size[b]){
//         swap(a , b) ;
//         parent[b] = a ; 
//         // after swap a is always greater and b is always smaller  
//   Size[a]+= Size[b] ; 
//     }
//     }
// }




const int N = 1e5+10;
//  to optmize we do 2 things 
//  path compression 
// union by size/rank 
 int parent[N] ; 
 int Size[N];
 void make(int v){
     parent[v] = v ;
    Size[v] = 1 ; 
 }
 int find(int v ){
     if(v == parent[v])return v ;
    //  path compression 
     return  parent[v] = find(parent[v]) ; 
 }
 void Union(int a , int b){
    a =  find(a) ; 
    b = find(b) ; 
    //  we consider right tree(a) as smaller tree 
    //  if there is smaller tree on left we just swap them 
    // ie sizeof(a)< sizeof(b) swap 
    if(a!= b ){
        // union by rank 
        if(Size[a]<Size[b]) swap(a,b) ; 
        //  means dont have same parent 
        //  then merge them 
        parent[b] = a ; 
    }
    Size[a]+= Size[b] ; 
 }

void findAns() {
    int n , m  ; 
    cin>> n >> m ; 
    //  initilization 
    for(int i =1; i<= n ; i++){
make(i); 
    }
    for(int i= 0 ; i< m ; i++){
        int a , b ; 
        cin>>a>>b ; 
        Union(a , b ); 
    }

    //  count the connected components 
    //  if val is equal to parent then it is component 
    vector<int>ans ; 
    int cnt = 0 ; 
    for(int i = 1 ; i<=n ; i++){
        if(find(i) == i){
            cnt++ ; 
            ans.push_back(i) ; 
        }
    } 
    if(cnt == 1){
        cout << 0 ; 
        return ; 
    }
    cout << cnt -1<<'\n';
    for(int i = 0 ; i< ans.size()-1 ; i++){
        cout << ans[i]<<" "<<ans[i+1]<<'\n' ; 
    } 
    cout << '\n'  ;
}

int32_t main() {
    fast_io;
    findAns();
    
}


