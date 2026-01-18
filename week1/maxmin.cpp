#include <iostream>
#include <limits>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a<b){
        cout << "Min = " << a << endl;
        cout << "Max = " << b << endl;
    } else {
        cout << "Min = " << b << endl;
        cout << "Max = " << a << endl;
    }
}