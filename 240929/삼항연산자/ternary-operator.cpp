#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    string b;
    cin >> a;
    b = a == 100 ? "pass" : "failure";
    cout << b;
    return 0;
}