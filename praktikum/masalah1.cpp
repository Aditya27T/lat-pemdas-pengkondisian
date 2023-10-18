#include <iostream>

using namespace std;

int main() {
    cout << "=============================" << endl;
    cout << "TOKO BERKAH SEJAHTERA" << endl;
    cout << "=============================" << endl;

    int harga, jumlah, total, diskon, bayar;
    string nama_kasir, nama_orang;

    cout << "Masukkan nama kasir: ";
    cin >> nama_kasir;

    cout << "Masukkan nama pembeli: ";
    cin >> nama_orang;

    cout << "Masukkan harga barang: ";
    cin >> harga;

    cout << "Masukkan jumlah barang: ";
    cin >> jumlah;

    total = harga * jumlah;

    cout << "Total harga: " << total << endl;

    if (total < 75000) {
        diskon = 10;
    } else if (total >= 75000 || total <= 100000) {
        diskon = 20;
    } else if (total > 100000) {
        diskon = 30;
    } else {
        diskon = 0;
    }

    cout << "Diskon: " << diskon << "%" << endl;


    bayar = total - (total * diskon / 100);


    cout << "Total bayar: " << bayar << endl;

    cout << "=============================" << endl;
    cout << "TOKO BERKAH SEJAHTERA" << endl;
    cout << "=============================" << endl;

    cout << "Nama kasir: " << nama_kasir << endl;
    cout << "Nama pembeli: " << nama_orang << endl;
    cout << "Total harga: " << total << endl;
    cout << "Diskon: " << diskon << "%" << endl;
    cout << "Total bayar: " << bayar << endl;


    return 0;
}