#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n ; cin >> n; int m ; cin >> m;
    int cnt = 0;
    vector<int> v(n);

    
    for(int i = 0 ; i < n ; i++){
            cin >> v[i];
      }

    sort(v.begin() , v.end(), greater<int>());

    for(int j = 0 ; j < v.size() ; j++){
        while( m >= 0 ){
            m -= v[j];
            cnt++;
        }
    }
    cout <<cnt<<'\n';
   
}
