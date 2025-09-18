#include<iostream>
#include<algorithm>
#include<numeric>
#include<functional>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
            cin >> v[i];
    }
    
    sort(v.begin() , v.end());
    v[0] += 1;

    long long product = accumulate(v.begin() , v.end() , 1LL , multiplies<long long>() );

    cout << product << '\n';
}

int main(){
    int t; cin >> t;
    while(t--){ solve(); }
}



