#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio
    int N, M;
    cin >> N >> M;  
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            if (i == 1 || i == N || j == 1 || j == M)
                cout << '^';
            else
                cout << ' ';
        }
        cout << '\n';
    } 
    return 0;
}
