#include <iostream>
using namespace std;

int main() {
    int a, b, c, st;
    cin >> a >> b >> c;

    st = a > b && a > c ? (b > c ? b : c) : (a > c ? (a > b ? (b > c ? b : c) : a) : (c > b ? (a > b ? a : b) : c));
    cout << st;
    return 0;
}