#include<iostream>
using namespace std;

int main(){
	int64_t n; cin >> n;
	for(int i = 0 ; i < n ; i++){
		int a , b;
		a = i ; b = i+1;
		if( a <= b & n == a * b) cout<<a<<" "<<b<<'\n';
	}
}
			
			
