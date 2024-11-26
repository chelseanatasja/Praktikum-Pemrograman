#include <iostream>
using namespace std; 

void runTest1() {
    cout << "Running Test Case 1..." << endl;
    int n = 5;
    int output = 120;
    int faktorial = 1;
    for(int i=1;i<=n;i++){
        faktorial *= i;
    }
    cout << "Faktorial bilangan itu adalah: "<< faktorial << endl;

    // Validasi dengan if
    if (faktorial==output) {
        cout << "Test Case 1 Berhasil!" << endl;
    } else {
        cout << "Test Case 1 Gagal!" << endl;
    }
}
void runTest2() {
    cout << "Running Test Case 1..." << endl;
    int n = 10;
    int output = 3628800;;
    int faktorial = 1;
    for(int i=1;i<=n;i++){
        faktorial *= i;
    }
    cout << "Faktorial bilangan itu adalah: "<< faktorial << endl;

    // Validasi dengan if
    if (faktorial==output) {
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
