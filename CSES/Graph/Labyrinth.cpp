#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
#define vvc  vector<vector<char>>
#define vc vector<char>
stack<char>st ; 
int n, m; 
vector<vector<bool>>vis(1000 , vector<bool>(1000 , false )) ; 
vector<vector<char>>steps(1000 , vector<char>(1000 , ' ' )) ; 
vvc arr(1000, vc(1000)); 
stack<char> ans; 

bool is_valid(int x , int y ){
    if(x>= 0 and y>= 0 and x< n and y <m and !vis[x][y] and arr[x][y] != '#') return true  ; 
    return false ; 
}
void calculatePath(int x , int y ){
if(steps[x][y]!='X'){
    char ch = steps[x][y] ; 
    ans.push(ch) ; 
    if(ch == 'U'){
        calculatePath(x+1 , y ) ; 
    }
    else if(ch == 'D'){
        calculatePath(x-1 , y ) ; 
    } 
    else if(ch == 'L'){
        calculatePath(x , y+1 ) ; 
    }
    else if(ch == 'R'){
        calculatePath(x , y-1 ) ; 
    }
}
}

 bool bfs(int x ,int y){
    steps[x][y] = 'X';
    bool flag = false ; 
    queue<pair<int , int>>q ;
    q.push({x , y }); 
    while(!q.empty()){
        x = q.front().first ;
        y = q.front().second ; 
        q.pop(); 
        if(arr[x][y]=='B'){
            flag = true ; 
            break; 
        }
        vis[x][y] = true ; 

           if (is_valid(x - 1, y)) {
            vis[x - 1][y] = true;
            steps[x - 1][y] = 'U';
            q.push({ x - 1, y });
        }
        if (is_valid(x, y + 1)) {
            vis[x][y + 1] = true;
            steps[x][y + 1] = 'R';
            q.push({ x, y + 1 });
        }
        if (is_valid(x + 1, y)) {
            vis[x + 1][y] = true;
            steps[x + 1][y] = 'D';
            q.push({ x + 1, y });
        }
        if (is_valid(x, y - 1)) {
            vis[x][y - 1] = true;
            steps[x][y - 1] = 'L';
            q.push({ x, y - 1 });
        }
    }

    if(flag){
        //  we are using x and y becuse it is holding the cordinates of B 
        calculatePath(x , y );
        return true ;
    }
    return false ; 
 }
 
void findAns() {
    int si , sj ; 
   
    cin >> n >> m; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 'A'){
                si = i ; 
                sj = j ; 
            } 
        }
    }


   if(!bfs(si,sj)){
    cout << "NO"<<'\n' ;  
   }
   else{
    cout << "YES"<<'\n' ; 
    cout << ans.size() << '\n' ;
    while(!ans.empty()){
        cout << ans.top(); 
        ans.pop() ; 
    }
    cout << '\n' ; 
   }
   return ;      

}

int32_t main() {
    fast_io;
     
        findAns();
    
}
