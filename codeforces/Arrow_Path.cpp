#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long
#define int long long int

int drow[4] = {-1, 0, 1, 0};
int dcol[4] = {0, 1, 0, -1};

bool BFS(vector<vector<char>>& grid, vector<vector<bool>>& vis, int n) {
    queue<pair<int, pair<int, int>>> q;
    q.push({0, {0, 0}});
    vis[0][0] = true;

    while (!q.empty()) {
        // auto [state, pos] = q.front();
        // auto [row, col] = pos;
        int state = q.front().first ; 
        int row =q.front().second.first ; 
        int col =q.front().second.second ; 
        q.pop();

        if (row == 1 && col == n - 1) return true; 

        if (state == 0) { 
            for (int i = 0; i < 4; i++) {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                if (nrow >= 0 && nrow < 2 && ncol >= 0 && ncol < n && !vis[nrow][ncol]) {
                    q.push({1, {nrow, ncol}});
                    vis[nrow][ncol] = true;
                }
            }
        } else { 
            if (grid[row][col] == '>') {
                int nrow = row;
                int ncol = col + 1;
                if (ncol < n && !vis[nrow][ncol]) {
                    q.push({0, {nrow, ncol}});
                    vis[nrow][ncol] = true;
                }
            } else if (grid[row][col] == '<') {
                int nrow = row;
                int ncol = col - 1;
                if (ncol >= 0 && !vis[nrow][ncol]) {
                    q.push({0, {nrow, ncol}});
                    vis[nrow][ncol] = true;
                }
            }
        }
    }

    return false;
}

void findAns() {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;

    vector<vector<char>> grid(2, vector<char>(n));
    for (int i = 0; i < n; i++) grid[0][i] = s1[i];
    for (int i = 0; i < n; i++) grid[1][i] = s2[i];

    vector<vector<bool>> vis(2, vector<bool>(n, false));

    if (BFS(grid, vis, n))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        findAns();
    }
}
