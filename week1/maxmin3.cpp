#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int arr[3] = {a, b, c};
    cout << "Min = " << *std::min_element(arr, arr+3) << endl;
    cout << "Max = " << *std::max_element(arr, arr+3) << endl;
}