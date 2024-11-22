#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

vector<vector<bool>> vis;
vector<vector<char>> steps;
vector<vector<char>> grid;
stack<char> ans;
int x, y, n, m;
int drow[4] = {-1, 0, 1, 0};
int dcol[4] = {0, 1, 0, -1};

bool check(int x, int y) {
    return (x == 0 || x == n - 1 ||  y == 0 || y == m - 1) and grid[x][y]=='.';
}

void makeWall(int a, int b) {
    for (int _ = 0; _ < 4; _++) {
        int nrow = drow[_] + a;
        int ncol = dcol[_] + b;
        if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && grid[nrow][ncol] == '.') {
            grid[nrow][ncol] = '#';
        }
    }
}

bool is_valid(int x, int y) {
    return x >= 0 && y >= 0 && x < n && y < m && !vis[x][y] && grid[x][y] != '#';
}

void calculatePath(int x, int y) {
    if (steps[x][y] != 'X') {
        char ch = steps[x][y];
        ans.push(ch);
        if (ch == 'U') calculatePath(x + 1, y);
        else if (ch == 'D') calculatePath(x - 1, y);
        else if (ch == 'L') calculatePath(x, y + 1);
        else if (ch == 'R') calculatePath(x, y - 1);
    }
}

bool bfs(int x, int y) {
    steps[x][y] = 'X';
    queue<pair<int, int>> q;
    q.push({x, y});
    while (!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        if (check(x, y)) {
            calculatePath(x, y);
            return true;
        }
        vis[x][y] = true;

        for (int i = 0; i < 4; i++) {
            int nrow = x + drow[i];
            int ncol = y + dcol[i];
            if (is_valid(nrow, ncol)) {
                vis[nrow][ncol] = true;
                steps[nrow][ncol] = i == 0 ? 'U' : i == 1 ? 'R' : i == 2 ? 'D' : 'L';
                q.push({nrow, ncol});
            }
        }
    }
    return false;
}

void findAns() {
    cin >> n >> m;
    grid.assign(n, vector<char>(m, ' '));
    vis.assign(n, vector<bool>(m, false));
    steps.assign(n, vector<char>(m, ' '));
    vector<pair<int, int>> vp;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') {
                x = i;
                y = j;
            } else if (grid[i][j] == 'M') {
                vp.push_back({i, j});
            }
        }
    }

    for (auto it : vp) {
        makeWall(it.first, it.second);
    }

    if (!bfs(x, y)) {
        cout << "NO" << '\n';
    } else {
        cout << "YES" << '\n';
        cout << ans.size() << '\n';
        while (!ans.empty()) {
            cout << ans.top();
            ans.pop();
        }
        cout << '\n';
    }
}

int32_t main() {
    fast_io;
    findAns();
    return 0;
}
