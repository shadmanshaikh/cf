#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long ans = 0 ;
        long long n ; cin >> n;
        if( n >= 4 ){
                ans = pow(n , 2) + 2 * ( n + 1 );
        }
        cout << ans << '\n';
    }
}
