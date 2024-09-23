#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    int weight = 13;
    float moon = 0.165;

    cout.precision(6);
    cout << weight << " * " << moon << " = " << weight * moon;
    return 0;
}