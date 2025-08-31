#include <bits/stdc++.h>
using namespace std;

int main(){
	int a , b ; cin >> a >> b;
	int ans = 0 ;
	if ( a != b  ) {
		if( a == 1 && b == 2 || a ==  2 && b == 1 ){ ans = 3;} else if( a == 2 && b == 3 || a == 3 && b == 2) { ans = 1;} else { ans = 2; } 
	}
	cout<< ans << '\n';
}

