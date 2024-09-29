#include <iostream>
using namespace std;

int main() {
    double eye;
    cin >> eye;

    if (eye >= 1.0) {
        cout << "High";
    } else if ( eye >= 0.5) {
        cout << "Middle";
    } else {
        cout << "Low";
    }
    return 0;
}