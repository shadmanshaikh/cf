#include <iostream>
#include <vector>
using namespace std;

void solve(){
	int n ; cin >> n;
	for (int x = 0; x <= n; x++) {
        for (int y = 0; y <= n; y++) {
            for (int z = 0; z <= n; z++) {
                if ((x + y + z == n) && (x % 3 != 0) && (y % 3 != 0 ) && ( z % 3 !=0 )) {
		    cout << "YES" <<'\n';
                    cout << x << " " << y << " " << z << "\n";
		    break;
                }else{
			cout<< "NO" <<'\n';
			break;
		}
            }
        }
    }

}

int main(){
	int t; cin>>t ; while(t--){ solve(); }
}
