#include <iostream>
using namespace std;

int main() {
    int fa, sa;
    char fg, sg;
    cin >> fa >> fg;
    cin >> sa >> sg;

    if ((fa >= 19 && fg == 'M') || (sa >= 19 && sg == 'M')) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}