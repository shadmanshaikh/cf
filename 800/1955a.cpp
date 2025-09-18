#include<iostream>
using namespace std;

void solve(){
    int n  , a , b; cin >> n >> a >> b;
    int out = 0 ;
    
    if( n*a < b ){
        out = a*b;
    }else if(n*a > b && ( ( (b/2) * 2) != b)){
        while( n != 0 ){
            out = a+b;
            n--;
        }
    }else{
        out = b;
    }

    cout << out << '\n';
    
}

int main(){
    int t ; cin >> t;
    while( t-- ) { solve(); }
}
