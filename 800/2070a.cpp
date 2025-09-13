#include<iostream>
using namespace std;

void solve(){
	long long n ; cin >> n;
	long long cnt = 0;
	int M1 = 3, M2 = 5;
        int sum1 = 0, sum2 = 0;
	
	for(long long i = 0 ; i <= n ; i++){
	
		 sum1 += i;
        	if (sum1 >= M1) sum1 -= M1;  // fast mod 3

        	sum2 += i;
        	if (sum2 >= M2) sum2 -= M2;  // fast mod 5
		
		//	if( f == 0 && s == 0 ) cnt = 1;
		if(sum1 == sum2 ){
			cnt++;
		//	cout << f << " " << s << '\n';
		}
	}
	
	cout<< cnt << '\n';
}
int main(){
	int t; cin >> t;
	while(t--){ solve() ; } }
