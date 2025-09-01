#include<iostream>
using namespace std;

void solve(){
    int x , y ; cin >> x >> y;
    ( x < y) ? cout << x <<" " << y << '\n' : cout << y <<" "<< x << '\n';
}

int main(){
    int t ; cin >> t;
    while( t--) { solve(); }
}
