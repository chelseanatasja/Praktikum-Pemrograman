#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Siswa {
    string nisn;
    string nama;
    int nilai;
};

// Fungsi untuk menampilkan data siswa
void tampilkanData(const vector<Siswa>& data) {
    for (const auto& siswa : data) {
        cout << "NISN: " << siswa.nisn << ", Nama: " << siswa.nama << ", Nilai: " << siswa.nilai << endl;
    }
}

// Fungsi pengurutan metode Penyisipan berdasarkan NISN
void insertionSortNISN(vector<Siswa>& data) {
    for (int i = 1; i < data.size(); i++) {
        Siswa key = data[i];
        int j = i - 1;
        while (j >= 0 && data[j].nisn > key.nisn) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
}

// Fungsi pengurutan metode Penyisipan berdasarkan Nilai
void insertionSortNilai(vector<Siswa>& data) {
    for (int i = 1; i < data.size(); i++) {
        Siswa key = data[i];
        int j = i - 1;
        while (j >= 0 && data[j].nilai > key.nilai) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
}

// Fungsi pengurutan metode Seleksi berdasarkan NISN
void selectionSortNISN(vector<Siswa>& data) {
    for (int i = 0; i < data.size() - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < data.size(); j++) {
            if (data[j].nisn < data[minIndex].nisn) {
                minIndex = j;
            }
        }
        swap(data[i], data[minIndex]);
    }
}

// Fungsi pengurutan metode Seleksi berdasarkan Nilai
void selectionSortNilai(vector<Siswa>& data) {
    for (int i = 0; i < data.size() - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < data.size(); j++) {
            if (data[j].nilai < data[minIndex].nilai) {
                minIndex = j;
            }
        }
        swap(data[i], data[minIndex]);
    }
}

// Fungsi pengurutan metode Gelembung berdasarkan NISN
void bubbleSortNISN(vector<Siswa>& data) {
    for (int i = 0; i < data.size() - 1; i++) {
        for (int j = 0; j < data.size() - i - 1; j++) {
            if (data[j].nisn > data[j + 1].nisn) {
                swap(data[j], data[j + 1]);
            }
        }
    }
}

// Fungsi pengurutan metode Gelembung berdasarkan Nilai
void bubbleSortNilai(vector<Siswa>& data) {
    for (int i = 0; i < data.size() - 1; i++) {
        for (int j = 0; j < data.size() - i - 1; j++) {
            if (data[j].nilai > data[j + 1].nilai) {
                swap(data[j], data[j + 1]);
            }
        }
    }
}

int main() {
    vector<Siswa> data = {
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfandra", 55},
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70},
        {"9952382180", "Ari Lutfianto", 65},
        {"9965653989", "Arief Budiman", 60}
    };

    cout << "Data Awal:" << endl;
    tampilkanData(data);

    // Urutkan berdasarkan NISN dan tampilkan
    cout << "\nPengurutan berdasarkan NISN (Penyisipan):" << endl;
    insertionSortNISN(data);
    tampilkanData(data);

    cout << "\nPengurutan berdasarkan Nilai (Penyisipan):" << endl;
    insertionSortNilai(data);
    tampilkanData(data);

    cout << "\nPengurutan berdasarkan NISN (Seleksi):" << endl;
    selectionSortNISN(data);
    tampilkanData(data);

    cout << "\nPengurutan berdasarkan Nilai (Seleksi):" << endl;
    selectionSortNilai(data);
    tampilkanData(data);

    cout << "\nPengurutan berdasarkan NISN (Gelembung):" << endl;
    bubbleSortNISN(data);
    tampilkanData(data);

    cout << "\nPengurutan berdasarkan Nilai (Gelembung):" << endl;
    bubbleSortNilai(data);
    tampilkanData(data);

    return 0;
}
