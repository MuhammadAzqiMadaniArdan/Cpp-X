#include <iostream>
using namespace std;
int main(){
int input;
int input2;
char ulang;
do
{   

  cout << "masukkan element pertama: ";
    cin >> input;

    cout << "masukkan element kedua: ";
    cin >> input2;

    int angka1[input][input2];
    int angka2[input][input2];
    
    cout <<"---Array Pertama---"<<endl;

    for (int i = 0 ;i < input; i++){

        for (int x=0 ; x <input2;x++){

            cout << "masukkan angka " <<endl;
            cin >> angka1[i][x];

        }
    }
    cout << "---Array Kedua---"<<endl;

    for (int i = 0 ;i < input; i++){

        for (int x=0 ; x <input2;x++){

            cout << "masukkan angka " <<endl;
            cin >> angka2[i][x];

        }
    }
    
    int oprt;
    
    
    cout <<"input operator untuk menghitung kedua array "<<endl;
    cout <<"[1 = +] "<<endl;
    cout <<"[2 = -] "<<endl;
    cout <<"[3 = *] "<<endl;
    cout <<"[4 = /] "<<endl;
    cout <<"masukkan operator yang diinginkan "<<endl;
    cin >> oprt;
    cout <<endl;

    int utm[input][input2];

    if (oprt==1){
        for (int i = 0 ;i < input; i++){

        for (int x=0 ; x <input2;x++){

            utm[i][x]=angka1[i][x]+angka2[i][x];

            if(utm[i][x] % 2 ==0){
             cout << utm[i][x] <<" genap"<<endl;}
            
            else{
             cout << utm[i][x] <<" ganjil"<<endl;

            }

        }
    }
    }
    else if (oprt==2){
        for (int i = 0 ;i < input; i++){

        for (int x=0 ; x <input2;x++){

            utm[i][x]=angka1[i][x]-angka2[i][x];

            if(utm[i][x] % 2 ==0){
             cout << utm[i][x] <<" genap"<<endl;}
            
            else{
             cout << utm[i][x] <<" ganjil"<<endl;

            }

        }
    }
    }
    else if (oprt==3){
        for (int i = 0 ;i < input; i++){

        for (int x=0 ; x <input2;x++){

            utm[i][x]=angka1[i][x]*angka2[i][x];

            if(utm[i][x] % 2 ==0){
             cout << utm[i][x] <<" genap"<<endl;}
            
            else{
             cout << utm[i][x] <<" ganjil"<<endl;

            }

        }
    }
    }
    else if (oprt==4){
        for (int i = 0 ;i < input; i++){

        for (int x=0 ; x <input2;x++){

            utm[i][x]=angka1[i][x]/angka2[i][x];

            if(utm[i][x] % 2 ==0){
             cout << utm[i][x] <<" genap"<<endl;}
            
            else{
             cout << utm[i][x] <<" ganjil"<<endl;

            }

        }
    }
    
    
}

    cout <<"apakah ingin mengulang {y/n}";
    cin >> ulang;
}

while (ulang!= 'n' && ulang =='y');
cout <<"---Program Selesai---";

}
    
// if (i <=5){







