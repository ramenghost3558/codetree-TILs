#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    char c;
    double a, b;
    cin >> c;
    cin >> a >> b;

    cout.precision(2);
    cout << c << endl;
    cout << a << endl;
    cout << b;
    return 0;
}