#include <iostream>
using namespace std;
#include <string>
#include <algorithm>



void solve(){
    string s ; cin >> s;
    string r = s;
    reverse(r.begin() , r.end());
    int res = s.compare(r);
    if( res == 0 ) { cout << "NO"<<'\n'; } else { cout<<"YES"<<'\n'; cout<< r << '\n'; }
}

int main() {
    int t; cin >> t;
    while(t--){ solve();}
}

