#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    float a, b, c;
    cin >> a >> b >> c;

    cout.precision(3);
    cout << a << endl;
    cout << b << endl;
    cout << c;
    return 0;
}