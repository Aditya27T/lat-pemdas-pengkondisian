#include <iostream>
#include <string>

using namespace std;

int main() {
    float nilai_keaktifan, nilai_tugas, nilai_ujian, nilai_akhir;
    string nilai_huruf, motivasi;
    // char nilai_huruf[2], motivasi[100];

    // Input nilai keaktifan, tugas, dan ujian
    cout << "Masukkan nilai keaktifan: ";
    cin >> nilai_keaktifan;
    cout << "Masukkan nilai tugas: ";
    cin >> nilai_tugas;
    cout << "Masukkan nilai ujian: ";
    cin >> nilai_ujian;

    // Hitung nilai akhir
    nilai_akhir = nilai_keaktifan * 0.2 + nilai_tugas * 0.3 + nilai_ujian * 0.5;

    // Konversi nilai angka ke huruf
    if (nilai_akhir >= 0 && nilai_akhir <= 44) {
        nilai_huruf = "E";
        motivasi = "Maaf, Anda belum dapat diluluskan. Tingkatkan terus belajar Anda.";
    } else if (nilai_akhir >= 45 && nilai_akhir <= 55) {
        nilai_huruf = "D";
        motivasi = "Anda lulus, tingkatkan lagi pencapaian Anda.";
    } else if (nilai_akhir >= 56 && nilai_akhir <= 65) {
        nilai_huruf = "C";
        motivasi = "Anda lulus dengan baik, tingkatkan terus prestasi Anda.";
    } else if (nilai_akhir >= 66 && nilai_akhir <= 75) {
        nilai_huruf = "B-";
        motivasi = "Anda lulus dengan baik, tingkatkan terus prestasi Anda.";
    } else if (nilai_akhir >= 76 && nilai_akhir <= 80) {
        nilai_huruf = "B";
        motivasi = "Anda lulus dengan baik, tingkatkan terus prestasi Anda.";
    } else if (nilai_akhir >= 81 && nilai_akhir <= 85) {
        nilai_huruf = "B+";
        motivasi = "Anda lulus dengan baik, tingkatkan terus prestasi Anda.";
    } else if (nilai_akhir >= 86 && nilai_akhir <= 90) {
        nilai_huruf = "A-";
        motivasi = "Selamat! Anda lulus dengan nilai yang EXCELLENT!";
    } else if (nilai_akhir >= 91 && nilai_akhir <= 100) {
        nilai_huruf = "A";
        motivasi = "Selamat! Anda lulus dengan nilai yang EXCELLENT!";
    } else {
        nilai_huruf = "X";
        motivasi = "Nilai yang Anda masukkan tidak valid.";
    }

    // Output nilai akhir, nilai huruf, dan motivasi
    cout << "Nilai akhir: " << nilai_akhir << endl;
    cout << "Nilai huruf: " << nilai_huruf << endl;
    cout << "Motivasi: " << motivasi << endl;

    return 0;
}
