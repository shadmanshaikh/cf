#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


void solve(){
   int a , b , c; cin >> a >> b >> c;
    unordered_map<int , int> freq;
    freq[a]++; freq[b]++; freq[c]++;

    for(auto &p : freq){
        if(p.second == 1){
            cout<<p.first<<'\n';
        }
    } 
} 

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
