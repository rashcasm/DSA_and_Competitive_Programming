#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio
    
    char c;
    cin >> c;
    
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        cout << "YES\n";
    else
        cout << "NO\n";
    
    return 0;
}
