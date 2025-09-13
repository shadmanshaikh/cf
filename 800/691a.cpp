#include<iostream>
#include<vector>

using namespace std;

int main(){
	int64_t n; cin >> n;
	vector<int> v(n);
	int cnt0 = 0 , cnt1 = 0;
	for(int i = 0 ; i < n; i++){ cin >> v[i] ; }
	for( int i = 0 ; i < v.size() ; i++){
		if(v[i] == 0){ cnt0++;} else { cnt1++; }
	}
	if( cnt1 > cnt0){cout<<"YES"<<'\n';}else{cout<<"NO"<<'\n';}
}
