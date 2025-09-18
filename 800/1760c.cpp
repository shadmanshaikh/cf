#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(){
    int n ; cin >> n;
    vector<int> v(n);
    vector<int> secondLargestFinder;
    vector<int> res;
    for(int i = 0 ; i < n ; i++){ cin >> v[i]; }
    secondLargestFinder = v;
    sort(secondLargestFinder.begin() , secondLargestFinder.end());
    int secondLargest = secondLargestFinder[ secondLargestFinder.size() - 2 ];
    int largestEle = *max_element(v.begin() , v.end());
    for(int i = 0 ; i < v.size() ; i++){
            int diff = v[i] - largestEle;
            if(largestEle == v[i]){ diff = largestEle - secondLargest ; }
            res.push_back(diff);
    }

    for(int x : res) cout << x << " " ;
    cout<<'\n';
}

int main(){
    int t ; cin >> t; while(t--){ solve(); }
}


