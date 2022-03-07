#include <iostream>
using namespace std;

int checkAscii() {
    int n;
    cout << "Digite um número: " << endl;
    cin >> n;

    cout << "O valor ASCII de " << n << " é " << char(n) << endl;
    return 0;
}

int main() {
    for (int i = 33; i < 127; ++i) {
        cout << i << " - " << char(i) << endl;
    }
}
