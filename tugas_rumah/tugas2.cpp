#include <iostream>
using namespace std;

int main() {
    int pilihan;
    float r, sisi, panjang, lebar, tinggi;

    cout << "Menu Penghitungan Luas Permukaan" << endl;
    cout << "1. Luas Permukaan Bola" << endl;
    cout << "2. Luas Permukaan Kubus" << endl;
    cout << "3. Luas Permukaan Balok" << endl;
    cout << "4. Luas Permukaan Tabung" << endl;
    cout << "5. Luas Permukaan Kerucut" << endl;
    cout << "6. Luas Permukaan Limas Segiempat" << endl;
    cout << "7. Tahun Kabisat" << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Masukkan jari-jari bola: ";
            cin >> r;
            cout << "Luas permukaan bola adalah " << 4 * 3.14 * r * r << endl;
            break;
        case 2:
            cout << "Masukkan panjang sisi kubus: ";
            cin >> sisi;
            cout << "Luas permukaan kubus adalah " << 6 * sisi * sisi << endl;
            break;
        case 3:
            cout << "Masukkan panjang balok: ";
            cin >> panjang;
            cout << "Masukkan lebar balok: ";
            cin >> lebar;
            cout << "Masukkan tinggi balok: ";
            cin >> tinggi;
            
            cout << "Luas permukaan balok adalah " << 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi) << endl;
            break;
        case 4:
            cout << "Masukkan jari-jari tabung: ";
            cin >> r;
            cout << "Masukkan tinggi tabung: ";
            cin >> tinggi;

            cout << "Luas permukaan tabung adalah " << 2 * 3.14 * r * (r + tinggi) << endl;
            break;
        case 5:
            cout << "Masukkan jari-jari kerucut: ";
            cin >> r;
            cout << "Masukkan tinggi kerucut: ";
            cin >> tinggi;

            cout << "Luas permukaan kerucut adalah " << 3.14 * r * (r + tinggi) << endl;
            break;
        case 6:
            cout << "Masukkan panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar: ";
            cin >> lebar;
            cout << "Masukkan tinggi: ";
            cin >> tinggi;

            cout << "Luas permukaan limas segiempat adalah " << panjang * lebar + 2 * (panjang * tinggi + lebar * tinggi) << endl;
            break;
        case 7:
            int tahun;
            cout << "Masukkan tahun: ";
            cin >> tahun;
            if ((tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0) {
                cout << tahun << " adalah tahun kabisat" << endl;
            } else {
                cout << tahun << " bukan tahun kabisat" << endl;
            }
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
            break;
    }

    return 0;
}