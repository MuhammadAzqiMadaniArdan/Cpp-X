#include <iostream>

using namespace std;
int main(){

    string siswa[3];
    int nilai [3];
    int totalinput =2;
    int tertinggi,terendah;
    
    // cout << "masukkan berapa banyak data";
    // cin >> totalinput;

    for (int i = 0; i <= totalinput; i++){
    
        cout << "masukkan nama anda: ";
        cin >> siswa[i];
        cout << "masukkan nilai anda: ";
        cin >> nilai[i];
    }

    tertinggi=nilai[0];
    terendah=nilai[0];

    for (int i = 0; i <= totalinput; i++){

    
     if (nilai[i] >= tertinggi){
        tertinggi=nilai[i];
        cout <<"berikut nilai tertinggi "<<
        tertinggi<<endl;
     }
     else if (nilai[i]< terendah){
        terendah=nilai[i];
        cout <<"berikut nilai terendah "<<
        terendah<<endl;
     }

     
    
    }
}