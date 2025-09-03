#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    int n ; cin >> n;
    vector<int> v(n) ;

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    if(is_sorted(v.begin() , v.end()) ){ cout<<"NO"<<'\n'; } else { cout<<"YES" <<'\n'; }
}

int main(){
     int t; cin >> t;
     while( t-- ) { solve() ; }
}
