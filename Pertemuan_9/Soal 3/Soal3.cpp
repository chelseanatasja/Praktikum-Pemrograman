#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Siswa {
    string nisn;
    string nama;
    int nilai;
};

// Fungsi pencarian beruntun dan pengubahan nama berdasarkan Nilai
void ubahNamaBerdasarkanNilai(vector<Siswa>& data, int nilai, const string& namaBaru) {
    for (auto& siswa : data) {
        if (siswa.nilai == nilai) {
            siswa.nama = namaBaru;
        }
    }
}

// Fungsi untuk menampilkan data siswa
void tampilkanData(const vector<Siswa>& data) {
    for (const auto& siswa : data) {
        cout << "NISN: " << siswa.nisn << ", Nama: " << siswa.nama << ", Nilai: " << siswa.nilai << endl;
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

    cout << "Data sebelum perubahan:" << endl;
    tampilkanData(data);

    // Ubah nama data dengan nilai 60 menjadi Joko
    cout << "\nMengubah nama yang memiliki nilai 60 menjadi Joko:" << endl;
    ubahNamaBerdasarkanNilai(data, 60, "Joko");
    tampilkanData(data);

    return 0;
}

