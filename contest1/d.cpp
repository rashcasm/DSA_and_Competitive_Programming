#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fastio
    
    ll Y;
    cin >> Y;
    
    if ((Y % 400 == 0) || (Y % 4 == 0 && Y % 100 != 0))
        cout << "Yes\n";
    else
        cout << "No\n";
    
    return 0;
}
