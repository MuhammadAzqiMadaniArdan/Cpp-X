#include <iostream>
using namespace std;
int main(){

    int totalinput;
    int totalinput2;


    cout << "masukkan element pertama: ";
    cin >> totalinput;

    cout << "masukkan element kedua: ";
    cin >> totalinput2;

    string nama[totalinput][totalinput2];
    int nis[totalinput][totalinput2];

    for (int i = 0 ;i < totalinput; i++){
        for (int x=0 ; x <totalinput2;x++){
            cout << "masukkan nama anda" <<endl;
            cin >> nama[i][x];
            cout << "masukkan nis anda "<<endl;
            cin >>nis[i][x];

        }
    }

    cout <<endl;

    //output
    for (int i=0 ;i <totalinput;i++){
        for (int x=0 ; x <totalinput2;x++){
            cout <<"nama anda adalah: " << nama[i][x] <<endl;
            cout << "nis anda adalah: " << nis[i][x] <<endl;
            

        }
    }
}