#include <iostream>

using namespace std;

int main() {
    bool angka;

    angka = (2 > 1) || (2 == 2); // true || true = true
    cout << angka << endl;

    angka = (2 > 1) && (2 == 1); // true && false = false
    cout << angka << endl;

    angka = (2 > 1) || !(2 == 1); // true || !false = true or true || true = true
    cout << angka << endl; 
}