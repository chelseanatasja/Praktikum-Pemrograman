#include <iostream>
#include <string>
using namespace std;

int main(){
    string input, reversed;
    cout << "Masukkan string yang ingin dibalik:";
    getline(cin,input);
    for(int i = input.size()-1; i>=0; i--){
        reversed += input[i];
    }
    cout << "String yang sudah dibalik:" << reversed << endl;
    return 0;
}