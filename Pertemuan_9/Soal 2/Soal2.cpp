#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Siswa {
    string nisn;
    string nama;
    int nilai;
};

// Fungsi pencarian biner berdasarkan NISN
int binarySearchNISN(const vector<Siswa>& data, const string& nisn) {
    int left = 0, right = data.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (data[mid].nisn == nisn)
            return mid;
        if (data[mid].nisn < nisn)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    vector<Siswa> data = {
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9952382180", "Ari Lutfianto", 65},
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfandra", 55},
        {"9965653989", "Arief Budiman", 60},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70}
    };

    string nisn = "9950310962";
    int index = binarySearchNISN(data, nisn);
    if (index != -1) {
        cout << "Data ditemukan: " << data[index].nama << ", Nilai: " << data[index].nilai << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }

    return 0;
}
