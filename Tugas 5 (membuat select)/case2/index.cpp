#include <iostream>
using namespace std;
int main(){

    char nilai;

    cout << "Masukkan nilai [A-F]";
    cin >> nilai;

    switch  (nilai){
        case 'A':
        case 'B':
        cout <<"Anda hebat"<<endl;
        break;

        case 'C':
        case 'D':
        cout  <<"Anda cukup hebat" <<endl;
        break;

        case 'E':
        case 'F':
        cout << "Anda kurang hebat" <<endl;
        break;

        default:
        cout << "Anda gagal" << endl;break;

 }
}