#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n , s ; cin >> n >> s;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }

    int x1 = v[0];
    int xn = v[v.size() - 1];

    cout << min( abs( s - x1 ) , abs( s - xn ) ) + ( xn - x1 )<<'\n';

}
int main(){
    int t ; cin >> t ; while( t--) { solve(); } }
