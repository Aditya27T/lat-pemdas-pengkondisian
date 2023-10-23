#include <iostream>
#include <string>

using namespace std;

int main() {
    string namaPerusahaan = "PT. MAKMUR SUKSES JAYA";
    string namaKasir, namaSalesman;
    int pendapatan, uangJasa, komisi;

    cout << "Masukkan nama kasir: ";
    cin >> namaKasir;

    cout << "Masukkan nama salesman: ";
    cin >> namaSalesman;

    cout << "Masukkan pendapatan salesman hari ini: ";
    cin >> pendapatan;

    if (pendapatan <= 60000) {
        uangJasa = 15000;
        komisi = pendapatan * 0.15;
    } else if (pendapatan <= 100000) {
        uangJasa = 30000;
        komisi = pendapatan * 0.2;
    } else {
        uangJasa = 50000;
        komisi = pendapatan * 0.3;
    }

    cout << endl;
    cout << "========================================" << endl;
    cout << "Nama Perusahaan: " << namaPerusahaan << endl;
    cout << "Nama Kasir: " << namaKasir << endl;
    cout << "Nama Salesman: " << namaSalesman << endl;
    cout << "Pendapatan hari ini: " << pendapatan << endl;
    cout << "Uang Jasa: " << uangJasa << endl;
    cout << "Komisi: " << komisi << endl;
    cout << "Total Gaji: " << uangJasa + komisi << endl;
    cout << "========================================" << endl;

    return 0;
}
