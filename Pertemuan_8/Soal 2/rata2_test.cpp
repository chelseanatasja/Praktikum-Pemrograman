#include <iostream>
#include <vector>
#include <cmath> // Untuk menggunakan fungsi abs
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

// Fungsi untuk membandingkan hasil dan expected output
void testCase(const vector<int>& angka, double expectedOutput, int testCaseNumber) {
    double output = hitungRataRata(angka, angka.size());
    if (abs(output - expectedOutput) < 1e-6) { // Menggunakan toleransi kecil untuk perbandingan float
        cout << "Test Case " << testCaseNumber << " berhasil" << endl;
    } else {
        cout << "Test Case " << testCaseNumber << " gagal. Output: " << output << ", Expected: " << expectedOutput << endl;
    }
}

int main() {
    // Test Case 1
    vector<int> angka1 = {10, 20, 30, 40};
    double expectedOutput1 = 25.0;
    testCase(angka1, expectedOutput1, 1);

    // Test Case 2
    vector<int> angka2 = {5, 15, 25, 35, 45};
    double expectedOutput2 = 25.0;
    testCase(angka2, expectedOutput2, 2);

    return 0;
}
