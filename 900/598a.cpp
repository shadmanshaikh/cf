
#include <iostream>
#include <vector>
using namespace std;

bool isPowerOfTwo(long long n) {
    return n > 0 && (n & (n - 1)) == 0;
}

void solve() {
    long long n;
    cin >> n;
    long long sum = 0;  // use long long for safety

    for (long long i = 1; i < n; i++) {  // start from 1
        if (isPowerOfTwo(i)) {
            sum -= i;
        } else {
            sum += i;
        }
    }
    cout << sum << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
