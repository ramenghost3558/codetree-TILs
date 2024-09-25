#include <iostream>
using namespace std;

int main() {
    float n;
    cin >> n;
    cout << fixed;
    n = n * 30.48;

    cout.precision(1);
    cout << n;
    return 0;
}