#include<iostream>
#include<vector>
using namespace std;

void solve(){
	int n ; cin >> n; 
	vector<int> v(n);
	vector<int> a;
	int cnt = 0;
	for(int i = 0 ; i < v.size() ; i++){ cin >> v[i]; }
	for(int j = 0 ; j < v.size() ; j++){
		a.push_back(abs(v[j] - v[j+1]));	
	}
	string ans = "";
	for(int k = 0 ; k < a.size() ; k++){
		if( a[k] !=5 || a[k] != 7 ){ ans = "NO"; }else{ ans = "YES"; }
	}


	cout<< ans <<'\n'; 
}

int main(){
	int t; cin >> t; while( t-- ) { solve(); }}
