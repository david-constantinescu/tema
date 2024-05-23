#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "Se citesc: ";
    cin >> x >> y >> z;

    int picioare = x * 4 + y * 2 + z * 4;

    cout << "Se afiseaza: " << picioare << endl;
    return 0;
}
