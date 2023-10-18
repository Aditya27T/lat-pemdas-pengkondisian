#include <iostream>

using namespace std;

int main() {
    int x;

    cout << "Masukkan sebuah angka: ";
    cin >> x;

    if (x >= 10) {
        if (x <= 20) {
            cout << "\nNilai" << x << " berada di antara 10 dan 20" << endl;
        } else {
            cout << "\nNilai " << x << " lebih dari 20" << endl;
        }
    } else {
        cout << "\nNilai " << x << " kurang dari 10" << endl;
    }

    return 0;
}
