#include <iostream>
using namespace std;

struct dataBarang {
    string kodeBarang;
    string namaBarang;
    float hargaBarang;
    int jumlahBarang;
};

void runTest1() {
    cout << "Running Test Case 1..." << endl;

    int n = 2; // Hardcode jumlah barang
    dataBarang inputBarang[n] = {
        {"B001", "Pensil", 5000.0, 10},
        {"B002", "Penghapus", 3000.0, 5}
    };

    int totalJumlahBarang = 0;
    float totalHarga = 0;

    for (int i = 0; i < n; i++) {
        totalJumlahBarang += inputBarang[i].jumlahBarang;
        totalHarga += inputBarang[i].hargaBarang;
    }

    float hargaRata = totalHarga / n;

    cout << "Jumlah Semua Barang: " << totalJumlahBarang << endl;
    cout << "Harga Rata-Rata Barang: " << hargaRata << endl;

    // Validasi dengan if
    if (totalJumlahBarang == 15 && hargaRata == 4000.0) {
        cout << "Test Case 1 Berhasil!" << endl;
    } else {
        cout << "Test Case 1 Gagal!" << endl;
    }
}

void runTest2() {
    cout << "Running Test Case 2..." << endl;

    int n = 3; // Hardcode jumlah barang
    dataBarang inputBarang[n] = {
        {"B003", "Buku", 15000.0, 20},
        {"B004", "Pulpen", 8000.0, 10},
        {"B005", "Penggaris", 7000.0, 5}
    };

    int totalJumlahBarang = 0;
    float totalHarga = 0;

    for (int i = 0; i < n; i++) {
        totalJumlahBarang += inputBarang[i].jumlahBarang;
        totalHarga += inputBarang[i].hargaBarang;
    }

    float hargaRata = totalHarga / n;

    cout << "Jumlah Semua Barang: " << totalJumlahBarang << endl;
    cout << "Harga Rata-Rata Barang: " << hargaRata << endl;

    // Validasi dengan if
    if (totalJumlahBarang == 35 && hargaRata == 10000.0) {
        cout << "Test Case 2 Berhasil!" << endl;
    } else {
        cout << "Test Case 2 Gagal!" << endl;
    }
}

int main() {
    // Jalankan kedua test case
    runTest1();
    runTest2();

    return 0;
}

