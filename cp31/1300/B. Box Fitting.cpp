#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
// bool   solve( vi & temp ,int n , int mid  , int w ){
//    int i = 0 , j = n-1 ; 
//     while(mid-->0 ){
//      int total = 0 ; 
//         while(i <= j ){
//             if(total + temp[j] > w ){
//                 if(total+ temp[i]> w ){
//                     break ; 
//                 }
//                 else {
//                     total+= temp[i] ; 
//                     i++ ; 
//                 }
//             }
//             else {
//                 total+= temp[j] ; 
//                 j-- ; 
//             }
//      } 
//      if(i> j ){
//         //  means they cross each other and we still have mid 
//         return true  ; 
//      }  
//     }
//     return false ; 
// }

bool solve(vector<int> temp, int n, int rows, int w) {
    multiset<int, greater<int>> ms(temp.begin(), temp.end());

    while (rows-- > 0 && !ms.empty()) {
        int rem = w;

        auto it = ms.begin();
        while (it != ms.end()) {
            if (*it <= rem) {
                rem -= *it;
                it = ms.erase(it);
            } else {
                ++it;
            }
        }
    }

    return ms.empty();
}


void findAns() {
int n , w ; 
cin>> n>> w ; 
vi temp(n) ; 
for(auto & it : temp)cin>> it ; 
sort(begin(temp) , end(temp)) ; 

int low  = 1 ; 
int high = n ; 
int ans = -1 ; 
while(low <= high ){
    int mid = low + (high - low )/2 ;
    if(solve(temp , n , mid  , w )){
        ans = mid ; 
    high = mid -1 ; 
    }
    else {
        low = mid+1  ;
    }
}
cout << ans << '\n' ; 
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
