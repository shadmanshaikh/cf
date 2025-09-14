#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

void solve(){
	long long n ; cin >> n;
	vector<long long> v(n);
	long long sum = 0;
	int oddcnt = 0 ;
	bool switcher = false;
	for(int i = 0 ; i < n ; i++){ cin >> v[i]; }
	for(int x : v){
		if( x % 2 !=0 ){
			oddcnt++;
			switcher = true;
			while( switcher == true && oddcnt == 1 && ( x % 2 == 0 ) ){
				sum += x;
			}
		}else{
			sum = 0;
		}
	}

	cout << sum << '\n';



}

int main(){
	int t; cin >> t;
	while( t-- ) { solve(); }
}
