#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int st;
    st = a;
    a = b;
    b = st;

    cout << a << " " << b;
    return 0;
}