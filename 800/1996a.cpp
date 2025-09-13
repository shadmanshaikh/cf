#include<iostream>
using namespace std;

void solve(){

	int n ; cin >> n;
	int cnt = 0;

		while( (n%2==0) && n >0 ){
			int cat = 2;int cow = 4;
			n -= max(cat , cow);
			cnt++;
		}
	

	cout<< cnt << '\n';
}

int main(){
	int t ;cin >> t;
	while(t--){ solve(); }};
