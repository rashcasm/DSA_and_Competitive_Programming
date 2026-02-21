#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio
    long long N;
    cin >> N;
    for (long long i = 1; i <= N; i++) {
        cout << string(i - 1, ' ');
        cout << string(i, 'x') << '\n';
    }
    return 0;
}
