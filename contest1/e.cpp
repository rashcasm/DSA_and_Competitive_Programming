#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fastio
    ll N;
    cin >> N;
    ll count_good = 0;
    for (ll i = 0; i < N; i++) {
        ll x;
        cin >> x;
        bool good = false;
        if (x != 0 && 18 % x == 0) 
            good = true;
        if (x % 45 == 0) 
            good = true;
        
        if (good) count_good++;
    }
    cout << count_good << '\n';
    return 0;
}
