#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(){
    long long n; cin >> n;
    vector<long long> v(n);
    long long inter = 0;
    for(long long j = 0 ; j < n ; j++){
        cin >> v[j];
    }
    sort(v.begin() , v.end());
    long long final = 0LL;
    for(long long i = 0 ; i < v.size() ; i++){
            inter = (1LL * v[i] * v[i+1]);
           // ans.push_back(inter);
            final = max<long long>(final , inter);
    }

    cout << final << '\n';
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}
