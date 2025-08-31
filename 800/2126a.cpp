#include <bits/stdc++.h>
#define fastio() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
void solve(){
	vector<int> v;
	int x;
	cin >> x;
	while( x > 0){
		v.push_back(x % 10);
		x /=10;
	}
	sort(v.begin() , v.end());
	cout<<v[0]<<'\n';
}

int main(){
	fastio();
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

