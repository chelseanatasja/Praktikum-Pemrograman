#include <iostream>
using namespace std; 

int main(){
    int n;
    cout << "Masukkan bilangan yang ingin dihitung faktorialnya: ";
    cin >> n;
    int faktorial = 1;
    for(int i=1;i<=n;i++){
        faktorial *= i;
    }
    cout << "Faktorial bilangan itu adalah: "<< faktorial << endl;
    return 0;
}