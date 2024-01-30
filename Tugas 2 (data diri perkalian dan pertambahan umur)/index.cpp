#include <iostream>
using namespace std;
int main (){
    string namaKu;
    int umurku;
    int umurTeman;
    int hasil1;
    int umurkk;
    int hasil2;

    cout << "masukkan nama anda";
    cin >> namaKu;

    cout << "Masukkan umur anda";
    cin >> umurku;

    cout << "Masukkan umur teman anda";
    cin >> umurTeman;

    hasil1 = umurku * umurTeman;

    cout << "Namaku " << namaKu <<endl;
    cout << "Hasil perkalian umurku dengan umur temanku =" << 
    hasil1 <<endl; 

    cout <<"Masukkan umur Kak David ";
    cin >> umurkk;

    hasil2 = hasil1 + umurkk;

    cout <<"Hasil ditambah umur kaka= " << hasil2;
    
}
