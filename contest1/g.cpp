#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fastio
    ll N;
    cin >> N;
    if (N == 0) {
        cout << 1 << '\n';
        return 0;
    }
    int count_zero = 0;
    while (N > 0) {
        if (N % 10 == 0) count_zero++;
        N /= 10;
    }
    cout << count_zero << '\n';
    return 0;
}
