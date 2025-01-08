#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

class TrieNode {
    public : 
    unordered_map<int , TrieNode*>child ; 
    int cnt ; 
    TrieNode(){
        cnt = 0 ; 
    }
    
};

class Solution{

public : 
    TrieNode * root ; 
    Solution(){
        root = new TrieNode() ; 
    }
int  countPrefixSuffixPairs(vector<string>&words)
{
     int ans = 0 ;
     for(auto word : words){
        TrieNode* curr = root ; 
        int n = word.size() ; 
        for(int i =0 ; i< n  ; i++){
            int node = word[i]*128+word[n-i-1] ;// hanshing coding you can use other code also such as you can multiply both wirh 128 
            if(curr->child.find(node) == curr->child.end()){
                curr->child[node]= new TrieNode() ; 
            } 
            curr = curr->child[node] ; 
            ans+= curr->cnt  ; 
        }
        curr->cnt++ ; 
     }
     return ans ; 

}

void findAns() {
    int n; 
    cin>> n ; 
    vector<string> words(n);
    for(auto & it : words)cin>> it ; 
   int ans = countPrefixSuffixPairs(words);
    cout <<"number of index pairs "<< ans << endl ; 
 
}
};

int32_t main() {
    fast_io;
 Solution s ;
    s.findAns() ; 
    
}
