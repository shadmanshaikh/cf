#include<iostream>
using namespace std;

void solve(){
    int n; cin >> n;
    int minSoFar = INT_MAX;
    vector<int> v(n);

    for(int i = 1 ; i <= n ; i++){
            cin >> v[i];
    }
    vector<int> res;
    for(int j = 1 ; j <= n ; j++){
        if( minSoFar >= v[j]){
                minSoFar = v[j];           
        }else{
                res.push_back(j);
        }
    }

    cout<< res.size() <<'\n';
    for(int x : res) cout << x << " ";
    cout << '\n';

}

int main(){
    int t ; cin >> t; while( t-- ){ solve() ; }
}
