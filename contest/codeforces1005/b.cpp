#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 

pair<int, int> longestSubarrayOfOnes(const vector<int>& arr) {
    int maxLength = 0, maxStart = -1;
    int currentLength = 0, currentStart = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            if (currentLength == 0) {
                currentStart = i;
            }
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStart = currentStart;
            }
            currentLength = 0;
        }
    }
    
    if (currentLength > maxLength) {
        maxLength = currentLength;
        maxStart = currentStart;
    }
    
    return (maxStart == -1) ? make_pair(-1, -1) : make_pair(maxStart + 1, maxStart + maxLength);
}

void findAns() {
    int n;
    cin >> n;
    vi a(n);
    for (auto &it : a) cin >> it;

    if (n == 1) {
        cout << "1 1" << endl;
        return;
    }

    unordered_map<int, int> mpp;
    for (auto it : a) {
        mpp[it]++;
    }

    vi temp(n, 0);
    for (int i = 0; i < n; i++) {
        if (mpp[a[i]] == 1) {
            temp[i] = 1;
        }
    }
 
    if (find(temp.begin(), temp.end(), 1) == temp.end()) {
        cout << "0" << endl;
        return;
    }
 
    pair<int, int> ans = longestSubarrayOfOnes(temp);
    cout << ans.first << " " << ans.second << endl;
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t-- > 0) {
        findAns();
    }
}
