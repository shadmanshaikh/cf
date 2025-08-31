#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n , a;
	vector<int> v;
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
		v.push_back(v[i]);
	}
	int sum = 0;
	for(int i = 0 ; i < v.size() ; i++){
		sum = v[i] - v[i+1]
	}
	cout << sum << '\n';
}
 
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}

			
	


