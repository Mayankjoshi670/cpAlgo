#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
void calculateZero(int n , int m , int k ){
    vi ans;
    while(n > 0 || m > 0){
        int cnt1 = 0, cnt2 = 0;
        
        // Add 0's first, but not more than k
        while(n > 0 && cnt1 < k){
            ans.push_back(0);
            n--; cnt1++;
        }

        // Add 1's next, but not more than k
        while(m > 0 && cnt2 < k){
            ans.push_back(1);
            m--; cnt2++;
        }
    }

    for(auto it : ans){
        cout << it;
    }
    cout << endl;
}

void calculateOne(int n , int m , int k ){
    vi ans;
    while(n > 0 || m > 0){
        int cnt1 = 0, cnt2 = 0;
        
        // Add 1's first, but not more than k
        while(m > 0 && cnt2 < k){
            ans.push_back(1);
            m--; cnt2++;
        }

        // Add 0's next, but not more than k
        while(n > 0 && cnt1 < k){
            ans.push_back(0);
            n--; cnt1++;
        }
    }

    for(auto it : ans){
        cout << it;
    }
    cout << endl;
}

void findAns(){
    int n, m, k;
    cin >> n >> m >> k;

    // If the difference between n and m is greater than k, it's impossible
    if(abs(n - m) > k || (n < k &&  m < k) ){
        cout << -1 << endl;    
        return;
    }

    if(n == 0){
        if(k == m ){

            // If there are no 0's, just print m 1's
            for(int i = 0; i < m; i++){
                cout << 1;
            }
            cout << endl;
        }
        else {
            cout  << -1 << endl;
        }
        return;
    } else if(m == 0){
        if(k ==  n ){

            // If there are no 1's, just print n 0's
            for(int i = 0; i < n; i++){
                cout << 0;
            }
            cout << endl;
        }
        else {
            cout << -1 << endl;

        }
        return;
    }

    if(n >= m){
        // If 0's are more than or equal to 1's
        calculateZero(n, m, k);   
    } else {
        // If 1's are more than 0's
        calculateOne(n, m, k);  
    }
}

int main() {
    int t;
    cin >> t;
    while(t-- > 0){
        findAns();
    }
    return 0;
}



