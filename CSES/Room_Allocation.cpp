#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vpi vector<pair<int, int>>
#define vi vector<int>
#define int long long int

void findAns() {
    int n;
    cin >> n;
    vpi events;
    vector<pair<int, int>> intervals(n);
    vi roomAssignment(n);

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        intervals[i] = {a, b};
        events.push_back({a, i + 1});
        events.push_back({b + 1, -(i + 1)});
    }

    sort(events.begin(), events.end());

    int cnt = 0, maxRooms = 0;
    priority_queue<int, vector<int>, greater<int>> availableRooms;
    int nextRoom = 1;

    for (auto &event : events) {
        int guestID = event.second;

        if (guestID > 0) {
            cnt++;
            int room;
            if (!availableRooms.empty()) {
                room = availableRooms.top();
                availableRooms.pop();
            } else {
                room = nextRoom++;
            }
            roomAssignment[guestID - 1] = room;
            maxRooms = max(maxRooms, cnt);
        } else {
            cnt--;
            int room = roomAssignment[-guestID - 1];
            availableRooms.push(room);
        }
    }

    cout << maxRooms << '\n';
    for (int i = 0; i < n; i++) cout << roomAssignment[i] << " ";
    cout << '\n';
}

int32_t main() {
    fast_io;
    findAns();
}
