#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
 

int main(){
        long long int n;
        cin >> n;
        vector<int> v;
        while( n > 0){
            v.push_back(n % 10);
            n /= 10;
        }

   reverse(v.begin() , v.end());
        int cnt = 0;
        for(int i = 0 ; i < v.size() ; i++){

                if( (v[i] == 4 || v[i] == 7) )
                    cnt++;

        }
        if(cnt == 4 || cnt == 7) cout<<"YES"<<'\n'; else cout<<"NO"<<'\n';

    }


