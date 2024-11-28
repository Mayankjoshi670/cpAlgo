#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int

void findAns() {
    // Input reading
    int n, k, op1, op2;
    cin >> n >> k >> op1 >> op2;
    vi nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Priority queue to keep track of largest numbers
    priority_queue<pair<int, pair<bool, bool>>> pq;  // pair<value, <op1_used, op2_used>>

    // Push all numbers into the priority queue
    for (int i = 0; i < n; i++) {
        pq.push({nums[i], {false, false}});
    }

    // Apply Operation 2 (subtract k) first to reduce numbers as much as possible
    while (op2 > 0 && !pq.empty()) {
        auto top = pq.top(); pq.pop();
        int val = top.first;
        bool op1_used = top.second.first;
        bool op2_used = top.second.second;

        if (!op2_used && val >= k) {
            val -= k;
            pq.push({val, {op1_used, true}});
            op2--;
        } else {
            pq.push(top);  // push back if no operation was performed
        }
    }

    // Apply Operation 1 (divide by 2) next to minimize the numbers further
    while (op1 > 0 && !pq.empty()) {
        auto top = pq.top(); pq.pop();
        int val = top.first;
        bool op1_used = top.second.first;
        bool op2_used = top.second.second;

        if (!op1_used && val / 2 > k) {
            val = (val + 1) / 2;  // divide by 2 and round up
            pq.push({val, {true, op2_used}});
            op1--;
        } else {
            if(!op1_used){
                break ; 
            }
            pq.push(top);  // push back if no operation was performed
        }
    }

    // Compute the minimum sum after applying the operations
    int result = 0;
    while (!pq.empty()) {
        result += pq.top().first;
        pq.pop();
    }

    cout << result << endl;
}

int32_t main() {
    fast_io;
    findAns();
    return 0;
}
