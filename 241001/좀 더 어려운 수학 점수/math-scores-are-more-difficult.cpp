#include <iostream>
using namespace std;

int main() {
    int ma, ea, mb, eb;
    cin >> ma >> ea;
    cin >> mb >> eb;

    if (ma > mb) {
        cout << "A";
    } else if (ma < mb) {
        cout << "B";
    } else {
        if (ea > eb) {
            cout << "A";
        } else {
            cout << "B";
        }
    }
    return 0;
}