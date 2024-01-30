#include <iostream>
using namespace std;
int main(){
    int input;
    int input2;
    int terendah;


    cout << "masukkan element pertama: ";
    cin >> input;

    cout << "masukkan element kedua: ";
    cin >> input2;

    int angka[input][input2];
    
    
    for (int i = 0 ;i < input; i++){

        for (int x=0 ; x <input2;x++){

            cout << "masukkan angka yang diinginkan" <<endl;
            cin >> angka[i][x];

        }
    }


    cout << endl;
   terendah=angka[0][0];

    for (int i = 0 ;i < input; i++){

        for (int x=0 ; x <input2;x++){

            if (angka[i][x] < terendah){
                terendah = angka[i][x];

        }
    }
    


}
        cout <<"berikut angka terendah "<<
        terendah<<endl;
}