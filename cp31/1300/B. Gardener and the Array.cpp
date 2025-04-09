#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void solve() {
	int n;
	cin >> n;
	int num;
	int setBit;
	vvi v(n  );
	 map<int, int> mp;
	for(int i = 0; i < n; ++i){
		cin >> num;
		while(num--){
			cin >> setBit;
			v[i].push_back(setBit);
			mp[setBit]++;
			
		}
	}
	bool work = 1;
	
	for(int i = 0; i < n; ++i){
		work = 1;
		for(int j = 0; j < v[i].size(); ++j){
			if(mp[v[i][j]] < 2) work &= 0;
		}
		if(work){
			cout << "Yes\n";
			return;
		}
	}
	cout << "No\n";
	


}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}