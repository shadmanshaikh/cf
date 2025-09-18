#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n ; cin >> n;
    int oddcnt = 0 , evencnt = 0;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }

    for( int i = 0 ; i < v.size() ; i++ ){

        if(i%2 == 0){ evencnt += v[i]; } else { oddcnt += v[i]; }
    }
    
    cout << evencnt - oddcnt << " " << '\n';


}

int main(){
    int t ; cin >> t;
    while( t-- ){ solve(); }
}
	


