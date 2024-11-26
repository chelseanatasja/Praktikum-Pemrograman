#include <iostream>
using namespace std;

    void runTest1() {
    cout << "Running Test Case 1..." << endl;

    string input = "chelsea";
    string output = "aeslehc";
    string reversed = "";
    for(int i = input.size()-1; i>=0; i--){
        reversed += input[i];
    }
    cout << "String yang sudah dibalik:" << reversed << endl;

    // Validasi dengan if
    if (reversed==output) {
        cout << "Test Case 1 Berhasil!" << endl;
    } else {
        cout << "Test Case 1 Gagal!" << endl;
    }
}
     void runTest2() {
    cout << "Running Test Case 1..." << endl;

    string input = "windah";
    string output = "hadniw";
    string reversed ="";
    for(int i = input.size()-1; i>=0; i--){
        reversed += input[i];
    }
    cout << "String yang sudah dibalik:" << reversed << endl;

    // Validasi dengan if
    if (reversed==output) {
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


   