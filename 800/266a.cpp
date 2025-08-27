#include <iostream>
#include <vector>
using namespace std;

int main(){
        int n ; cin >> n;
        vector<char> vc(n);
        int cnt = 0 ;
        for(int i = 0 ; i < n ; i++){ cin>> vc[i]; };
        for(int i = 0 ; i < vc.size() ; i ++){
               if(vc[i] == vc[i+1]){
                    cnt++;
                }
        }
        cout<<cnt<<'\n';
}
