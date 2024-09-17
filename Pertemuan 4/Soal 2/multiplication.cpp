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
    return 0;
}
