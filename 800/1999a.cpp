#include<bits/stdc++.h>
using namespace std;
void solve(){
	vector<int> v;
	int n;
	cin >> n;
	while(n > 0){
		v.push_back(n % 10);
		n /= 10;
			
	}
	int sum = accumulate(v.begin() , v.end() , 0);
	cout<< sum << '\n';


}

int main(){
	int t ; cin >> t;
	while(t--){ solve(); }

}

