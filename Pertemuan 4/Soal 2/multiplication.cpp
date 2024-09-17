#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Input: ";
    cin >> n;
    cout << "Output: " << endl;
    for(int i=1;i<=10;++i)
    {
        int x=n*i;
        cout << n << " x " << i << " = " << x << endl;
    }

    int n1 = 5;
    cout << "Input testcase1: " << n1 << endl;
    cout << "Output testcase1: " << endl;
    for(int i1=1;i1<=10;++i1)
    {
        int x1=n1*i1;
        cout << n1 << " x " << i1 << " = " << x1 << endl;
    }

    int n2 = 13;
    cout << "Input testcase2: " << n2 << endl;
    cout << "Output testcase2: " << endl;
    for(int i2=1;i2<=10;++i2)
    {
        int x2=n2*i2;
        cout << n2 << " x " << i2 << " = " << x2 << endl;
    }

    int n3 = 3;
    cout << "Input testcase3: " << n3 << endl;
    cout << "Output testcase3: " << endl;
    for(int i3=1;i3<=10;++i3)
    {
        int x3=n3*i3;
        cout << n3 << " x " << i3 << " = " << x3 << endl;
    }

    int n4 = 20;
    cout << "Input testcase4: " << n4 << endl;
    cout << "Output testcase4: " << endl;
    for(int i4=1;i4<=10;++i4)
    {
        int x4=n4*i4;
        cout << n4 << " x " << i4 << " = " << x4 << endl;
    }

    int n5 = 9;
    cout << "Input testcase5: " << n5 << endl;
    cout << "Output testcase5: " << endl;
    for(int i5=1;i5<=10;++i5)
    {
        int x5=n5*i5;
        cout << n5 << " x " << i5 << " = " << x5 << endl;
    }

    return 0;
}
