#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Se citeste: ";
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "Se afiseaza: " << sum << endl;
    return 0;
}
