#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c = 7;
    int st;
    st = a;
    a = c;
    c = b;
    b = st;

    cout << a << endl;
    cout << b << endl;
    cout << c;
    return 0;
}