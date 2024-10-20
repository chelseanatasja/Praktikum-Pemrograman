#include <iostream>

using namespace std;

int main()
{
   struct dataBarang {
   string kodeBarang;
   string namaBarang;
   float hargaBarang;
   int jumlahBarang;
   };

   int n;
   int totaljumlahBarang = 0;
   float hargaRata;
   float totalHarga=0;
   cout<<"Berapa banyak barang yang anda ingin input: ";
   cin>>n;
   dataBarang inputBarang[n];

   if(n>50){
    cout<<"Maksimal data yang diinput adalah 50"<<endl;
   }
   else if(n<=50){
   for(int i=0;i<n;i++){
   cout<<"Masukkan kode barang: ";
   cin>>inputBarang[i].kodeBarang;
   cout<<"Masukkan nama barang: ";
   cin>>inputBarang[i].namaBarang;
   cout<<"Masukkan harga barang: ";
   cin>>inputBarang[i].hargaBarang;
   cout<<"Masukkan jumlah barang: ";
   cin>>inputBarang[i].jumlahBarang;
   }

   for(int i=0;i<n;i++){
    totaljumlahBarang+=inputBarang[i].jumlahBarang;
   }

   for(int i=0;i<n;i++){
    totalHarga+=inputBarang[i].hargaBarang;
   }

   hargaRata=totalHarga/n;
   cout<<"Data barang: "<<endl;
   cout<<"Jumlah semua barang: "<<totaljumlahBarang<<endl;
   cout<<"Harga rata-rata barang: "<<hargaRata;
   }

   return 0;
}
