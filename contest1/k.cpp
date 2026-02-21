#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
int main() {
    fastio
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cout << string(i, ' ');
        cout << '>';
        if (i > 0) {
            cout << string(2 * i - 1, ' ');
            cout << '>';
        }
        cout << '\n';
    }
    for (int i = N - 2; i >= 0; i--) {
        cout << string(i, ' ');
        cout << '>';
        if (i > 0) {
            cout << string((2*i)-1, ' ');
            cout << '>';
        }
        cout << '\n';
    }
    return 0;
}
