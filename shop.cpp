#include <iostream>

using namespace std;

float berat;
int harga;
float potongan10;
int a, b, c = 0;
float potongan100;
char ans;

int main(){

    do{

    cout<<"==== Masukan Data ===="<<endl;
    cout<<"==== Berat Barang ===="<<endl;
    cout<<" "<<endl;
    cout<<"Berat barang (dalam gram): ";cin>>berat;
    
    harga = berat*10000;
    potongan10 = berat/10;
    potongan100 = berat/100;

    cout<<"Harga awal: "<<harga<<endl;

    if (berat >= 10){

                a = potongan10*10000;

                if (berat >= 100){
                    b = potongan100*25000;
                }
    }
    c = a + b;
    harga = harga - c;

    if (c > 0){
        cout<<"Potongan Harga: "<<c<<endl;
    }else {cout<<"Tidak ada potongan harga bagi barang yang beratnya kurang dari 10 gram"<<endl;}

    cout<<"Harga bersih: "<<harga<<" dengan berat "<<berat<<" gram"<<endl;
    cout<<"Ingin menghitung harga lagi? [Y/N]";cin>>ans;

    }while (ans == 'Y' || ans == 'y');

    cout<<"Terima Kasih telah menggunakan jasa kami!"<<endl;
    system("pause");

}