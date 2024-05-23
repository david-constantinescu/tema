#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Se citeste: ";
    cin >> n;

    int sum = 0;
    sum += n / 100;      // prima cifra
    sum += (n / 10) % 10; // a doua cifra
    sum += n % 10;       // a treia cifra

    cout << "Se afiseaza: " << sum << endl;
    return 0;
}
