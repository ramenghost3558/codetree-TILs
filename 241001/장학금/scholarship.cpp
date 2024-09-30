#include <iostream>
using namespace std;

int main() {
    int mg, lg;
    cin >> mg >> lg;

    if (mg >= 90) {
        if (lg >= 95) {
            cout << 100000;
        } else if (lg >= 90) {
            cout << 50000;
        } else {
            cout << 0;
        }
    } else {
        cout << 0;
    }
    return 0;
}