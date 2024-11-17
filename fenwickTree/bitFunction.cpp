#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
const int N = 1e5+10;
int bit[N];
int sum(int i){
	int ans = 0;
	for(; i > 0; i -= (i&-i))
		ans += bit[i];
	return ans;
}
void update(int i, int x){
	for(; i < N; i += (i&-i))
		bit[i] += x;
}
void findAns() {
    
}

int32_t main() {
    fast_io;
     
        findAns();
    
}
