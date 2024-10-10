#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> b >> a;

    for ( ; a <= b; ) {
        cout << b << " ";
        b -= 2;
    }
    return 0;
}