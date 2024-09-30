#include <iostream>
using namespace std;

int main() {
    int a, b, c, an;
    cin >> a >> b >> c;
    an = a < b && a < c ? a : (b < a && b < c ? b : c);
    cout << an;
    return 0;
}