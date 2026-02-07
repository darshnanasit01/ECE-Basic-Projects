#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two inputs (0 or 1): ";
    cin >> a >> b;

    cout << "AND Gate: " << (a & b) << endl;
    cout << "OR Gate: " << (a | b) << endl;
    cout << "NOT Gate A: " << (!a) << endl;
    cout << "NOT Gate B: " << (!b) << endl;

    return 0;
}
