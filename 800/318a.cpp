#include <iostream>
using namespace std;
#include <vector>
#define lli long long int


int main(){
	lli n , k ; cin >> n >> k;
	// create 3 vectors odd , even and final sorted ordered vector
	
	vector<long long> odd;
	vector<long long> even;
	vector<long long> final;
	lli ans = 0;
	for(lli i = 1 ; i <= n ; i++){
		if( i & 1 ){
			final.push_back(i);
			if( k == i){
				ans = final[i]; 
				break;
			}

		}else{
			
			final.push_back(i);
			if(k == i){
				ans = final[i];
			}
		}
	}
	for(int x : final) cout<< x << " "<<endl;
	cout << ans << '\n';
	//final.insert(final.end() , odd.begin() , odd.end());
	//final.insert(final.end() , even.begin() , even.end());
	
//	for(lli i = 1 ; i <= final.size() ; i++){
//		if( i == k ){
//			ans = final[i-1];
//		}
//	}
	//cout<< ans << '\n';
}

