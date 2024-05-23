#include <iostream>
using namespace std;

int main() {
    double v;
    cout << "Se citeste: ";
    cin >> v;

    double time = (60 / v) * 60; // timpul în minute

    cout << "Se afiseaza: " << time << endl;
    return 0;
}
