#include <iostream>
#include <string>
using namespace std;

/*
string print(string str) {
    cout << str;
}
*/

int main() {
    int n1, n2;

    cout << "Digite um número: " << endl;
    cin >> n1;
    cin.clear();
    cin.ignore(1000, '\n');

    cout << "Digite outro número: " << endl;
    cin >> n2;
    cin.clear();
    cin.ignore(1000, '\n');

    int sum = n1 + n2;

    cout << "A soma é: " << sum << endl;

    return 0;
}
