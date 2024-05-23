#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Se citeste: ";
    cin >> x;

    int ore = x / 60;
    int minute = x % 60;

    cout << "Se afiseaza: " << ore << " ore si " << minute << " minute" << endl;
    return 0;
}
