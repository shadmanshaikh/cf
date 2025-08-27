#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve(){
    int a , b , c; cin >> a >> b>> c;
    vector<int> n = {a ,b , c};
    sort(n.begin() , n.end());
    cout<< n[1]<<'\n';
}

int main(){
 
    int t ; cin >> t;
    while(t--){
        solve();
    }
}
