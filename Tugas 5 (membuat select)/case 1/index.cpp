#include <iostream>
using namespace std;
int main(){

    char nilai;

    cout << "Masukkan nilai ";
    cin >> nilai;

    switch  (nilai){
        case 'A ':
        cout <<"Anda hebat"<<endl;
        break;
        case 'B ':
        cout  <<"Anda cukup hebat" <<endl;
        break;

        case 'C':
        cout << "Anda kurang hebat" <<endl;
        break;

        default:
        cout << "Anda gagal" << endl;break;

 }
}