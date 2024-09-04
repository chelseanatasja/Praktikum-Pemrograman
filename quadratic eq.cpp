#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c;
    cout<<"Standard form: ax^2+bx+c=0"<<endl;
    cout<<"Input a = ";
    cin>>a;
    cout<<"Input b = ";
    cin>>b;
    cout<<"Input c = ";
    cin>>c;

    float d;
    d= b*b-4*a*c;

    if(d>0){
        float x1;
        float x2;
        x1 = (-b+sqrt(d))/2*a;
        x2 = (-b-sqrt(d))/2*a;
        cout<<"x1= "<<x1<<endl<<"x2= "<<x2;
    }


     else if(d==0){
        float x;
        x = -b/(2*a);
        cout<<"x = "<<x;
    }

     else {
        cout<<"There are no real roots";
    }

    return 0;

}
