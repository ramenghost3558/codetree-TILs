#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0 && n != 8 && n != 2) {
        cout << 30;
    } else if (n % 2 == 1 || n == 8) {
        cout << 31;
    } else {
        cout << 28;
    }
    return 0;
}