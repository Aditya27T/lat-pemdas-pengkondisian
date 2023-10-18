#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int bill;

    cout << "Masukkan dua digit angka terakhir NIM Anda: ";
    cin >> bill;

    if (bill % 2 == 0) {
        cout << "Angka yang Anda masukkan adalah bilangan GENAP" << endl;
    } else {
        cout << "Angka yang Anda masukkan adalah bilangan GANJIL" << endl;
    }

    getch();

    return 0;
}
