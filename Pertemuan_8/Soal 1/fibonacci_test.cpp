#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung Fibonacci ke-n
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// Fungsi untuk melakukan pengecekan test case
void testFibonacci(int n, int expected) {
    int result = fibonacci(n);
    if (result == expected) {
        cout << "Test Case dengan n = " << n << " berhasil" << endl;
    } else {
        cout << "Test Case dengan n = " << n << " gagal. Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    // Test case 1
    testFibonacci(5, 5);  // Fibonacci ke-5 seharusnya 5

    // Test case 2
    testFibonacci(10, 55);  // Fibonacci ke-10 seharusnya 55

    return 0;
}
