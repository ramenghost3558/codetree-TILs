#include <iostream>
using namespace std;

int main() {
    char c;
    int t, A, B, C, D;
    A = B = C = D = 0;
    
    for (int i = 0; i < 3; i++) {
        cin >> c >> t;
        if (c == 'Y') {
            if (t >= 37) {
                A += 1;
            } else {
                C += 1;
            }
        } else {
            if (t >= 37) {
                B += 1;
            } else {
                D += 1;
            }
        }
    }
    if (A >= 2) {
        cout << 'E';
    } else {
        cout << 'N';
    }
    return 0;
}