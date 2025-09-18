#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for(int i = 0 ; i < n ; i++){ cin >> a[i]; }
    for(int j = 0 ; j < n ; j++){ cin >> b[j]; }

    sort(a.begin() , a.end() );
    sort(b.begin() , b.end() );
    
    int ops = 0;

    for(int i = 0 ; i < n ; i++){

        cout << a[i] << " " ;
        cout << '\n';
        cout << b[i] << " " ;
            if(a[i] != b[i]){
                ops++;
            }
    }
    //cout <<  ops << '\n';
}


int main(){
    int t ; cin >> t;
    while(t--){
        solve();
    }
}
