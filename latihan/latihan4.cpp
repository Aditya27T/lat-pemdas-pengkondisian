#include <iostream>

using namespace std;

int main() {
    int x, y;
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> x;

    cout << "Masukkan sebuah bilangan bulat lainnya: ";
    cin >> y;

    if (x > 0 && y > 0) {
        cout << "Kedua bilangan tersebut adalah bilangan POSITIF \n" << endl;
    } else if (x > 0 || y > 0) {
        cout << "Salah satu bilangan tersebut adalah bilangan POSITIF \n    " << endl;
    } else {
        cout << "Kedua bilangan tersebut BUKAN bilangan POSITIF \n" << endl;
    }

    return 0;
}
