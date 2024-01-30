#include <iostream>
using namespace std;
int main(){
    int angka;
    
    cout << "Masukkan angka ";
    cin >> angka;

    if (angka >= 90){
        cout << angka <<endl <<"anda hebat";
    }
     else if (angka >=75 && angka < 90 ){
     cout << angka << endl <<
     "anda cukup hebat";
     }

     else if (angka >=50 && angka < 75){
        cout << angka <<endl << "anda kurang hebat";

     }
     else if (angka >=30 && angka <50){
        cout <<angka <<endl << "anda sangat kurang ";
    }

    else {
        cout << angka <<endl <<"anda gagal";   
    }

}