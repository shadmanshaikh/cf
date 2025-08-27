#include <vector>
#include <iostream>
#include <string>
using namespace std;
void solve(string s){

	if( s == "yes" || s == "YES" || s=="Yes" || s=="yEs" || s == "yeS" && s.size() <= 3){
			cout<<"YES"<<'\n';

}

int main(){
	string s ;
	cin >> s;
	solve(s);
}
