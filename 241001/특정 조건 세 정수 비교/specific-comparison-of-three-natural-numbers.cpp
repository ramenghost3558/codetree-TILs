#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == min({a, b, c})) {
        cout << "1 ";
    } else {
        cout << "0 ";
    }

    if (a == b && a == c) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}