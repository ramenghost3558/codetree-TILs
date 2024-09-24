#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 5;
    int st;

    st = a;
    a = b;
    b = st;

    cout << a << endl;
    cout << b;
    return 0;
}