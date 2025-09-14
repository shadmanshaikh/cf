#include<iostream>
#include<numeric>
#include<vector>
using namespace std;

void solve(){
    int n , x;
    cin >> x >> n;
    vector<int> v(n);
    int sum =0;
    for(int i = 0 ; i < n ; i++){
    		if( i % 2 == 0 ){
			v.push_back(x);
		}else{
			v.push_back(-x);
		}
    }
    sum = accumulate( v.begin() , v.end() , 0);
    
cout<< sum << '\n';
}

int main(){
	int t; cin >> t;
	while( t-- ){ solve(); } 
}
