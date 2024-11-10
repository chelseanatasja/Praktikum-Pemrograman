#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung Fibonacci ke-n
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;

    cout << "Bilangan Fibonacci ke-" << n << " adalah: " << fibonacci(n) << endl;

    return 0;
}
