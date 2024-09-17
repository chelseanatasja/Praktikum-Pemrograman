#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Input: ";
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    cout << "Output: Sum = " << sum << endl;

    int n1 = 10;
    int expected_output1 = 55;
    cout << "Input testcase1: "<< n1 << endl;
    int sum1 = 0;

    for (int i1 = 1; i1 <= n1; ++i1) {
        sum1 += i1;
    }
    cout << "Output testcase1: Sum = " << sum1;
    if(sum1 == expected_output1){
        cout << ", Test 1 passed!" << endl;
    }

    int n2 = 70;
    int expected_output2 = 2485;
    cout << "Input testcase2: "<< n2 << endl;
    int sum2 = 0;

    for (int i2 = 1; i2 <= n2; ++i2) {
        sum2 += i2;
    }
    cout << "Output testcase2: Sum = " << sum2;
    if(sum2 == expected_output2){
        cout << ", Test 2 passed!" << endl;
    }

    int n3 = 38;
    int expected_output3 = 741;
    cout << "Input testcase3: "<< n3 << endl;
    int sum3 = 0;

    for (int i3 = 1; i3 <= n3; ++i3) {
        sum3 += i3;
    }
    cout << "Output testcase3: Sum = " << sum3;
    if(sum3 == expected_output3){
        cout << ", Test 3 passed!" << endl;
    }

    int n4 = 200;
    int expected_output4 = 20100;
    cout << "Input testcase4: "<< n4 << endl;
    int sum4 = 0;

    for (int i4 = 1; i4 <= n4; ++i4) {
        sum4 += i4;
    }
    cout << "Output testcase4: Sum = " << sum4;
     if(sum4 == expected_output4){
        cout << ", Test 4 passed!" << endl;
    }

    int n5 = 760;
    int expected_output5 = 289180;
    cout << "Input testcase5: "<< n5 << endl;
    int sum5 = 0;

    for (int i5 = 1; i5 <= n5; ++i5) {
        sum5 += i5;
    }
    cout << "Output testcase5: Sum = " << sum5;
    if(sum5 == expected_output5){
        cout << ", Test 5 passed!" << endl;
    }
    return 0;
}



