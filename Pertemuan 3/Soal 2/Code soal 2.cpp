#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y, z;
    cout<<"inputkan bilangan 1 : ";
    cin>>x;
    cout<<"inputkan bilangan 2 : ";
    cin>>y;
    cout<<"inputkan bilangan 3 : ";
    cin>>z;

    switch(x>y)
    {
        case 1:
        switch(x>z)
        {
            case 1:
            cout<<"Bilangan terbesar adalah : "<<x<<endl;
            break;

        case 0:
            cout<<"Bilangan terbesar adalah :"<<z<<endl;
            break;
        }
        break;

        case 0:
        switch(y>z)
        {
            case 1:
            cout<<"Bilangan terbesar adalah : "<<y<<endl;
            break;

            case 0:
            cout<<"Bilangan terbesar adalah : "<<z<<endl;
            break;
        }
        break;
    }


    return 0;

}
