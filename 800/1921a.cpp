#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

void solve(){
        vector<int> v(8);
        set<int> s;

        for(int i = 0 ; i < 8 ; i++){
                cin >> v[i];
        }

        for(int i = 0 ; i < v.size() ; i++){
                if( i % 2 == 0){ s.insert(v[i]); }
        }
        int le = *s.rbegin(); int se = *s.begin();
        int res = le - se;
        res = res * res;
        cout << res << '\n';
}

int main(){
    int t ; cin >> t;
    while( t--) { solve(); }
}


