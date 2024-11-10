#include <iostream>
#include <vector>
using namespace std;

double hitungTotal(const vector<int>& angka, int n) {
    if (n == 1) {
        return angka[0];
    } else {
        return angka[n - 1] + hitungTotal(angka, n - 1);
    }
}

double hitungRataRata(const vector<int>& angka, int n) {
    double total = hitungTotal(angka, n);
    return total / n;
}

int main() {
    int n;
    cout << "Masukkan jumlah angka: ";
    cin >> n;
    
    vector<int> angka(n); // Menggunakan vector dengan ukuran n
    cout << "Masukkan " << n << " angka:\n";
    for (int i = 0; i < n; i++) {
        cin >> angka[i];
    }

    double rataRata = hitungRataRata(angka, n);
    cout << "Rata-rata dari angka yang dimasukkan adalah: " << rataRata << endl;

    return 0;
}
