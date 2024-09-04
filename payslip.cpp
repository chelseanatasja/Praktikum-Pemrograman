#include <iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter your name: ";
    getline(cin, name);

    int salary;
    cout<<"Enter your salary: ";
    cin>>salary;

    int tax;
    tax=0.2*salary;

    int installment;
    cout<<"Enter your installment: ";
    cin>>installment;

    int insurance;
    cout<<"Enter your insurance: ";
    cin>>insurance;

    int net_salary;
    net_salary = salary-tax-installment-insurance;

    cout<<"Payslip for Employee\n";
    cout<<"---------------------\n";
    cout<<"Name: "<<name<< endl;
    cout<<"Gross Salary: "<<salary<<endl;
    cout<<"Tax (20%): Rp "<<tax<< endl;
    cout<<"Installment: Rp"<<installment<< endl;
    cout<<"Insurance: Rp"<<insurance<< endl;
    cout<<"Net Salary: Rp"<<net_salary<< endl;

    return 0;
}
