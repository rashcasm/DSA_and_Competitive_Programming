#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fastio
    ll N;
    cin >> N;
    for (ll i = 1; i <= N; i++) {
        if (i % 15 == 0) 
            cout << "FizzBuzz\n";
        else if (i % 3 == 0) 
            cout << "Fizz\n";
        else if (i % 5 == 0) 
            cout << "Buzz\n";
        else 
            cout << i << '\n';
    }
    return 0;
}
