#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    for (int i = 1; i <= a; i++) {
        if (i % 2 == 0) {
            cout << 1 << endl;
        } else if (i % 3 == 0) {
            cout << 1 << endl;
        } else {
            cout << 0 <<endl;
        }
    }
    return 0;
}