#include <iostream>

using namespace std;
int main(){

    string siswa[3];
    int nilai [3];
    int totalinput =2;
    

    for (int i = 0; i <= totalinput; i++)
    {
        cout << "Masukkan nama anda: ";
        cin >> siswa[i];
        cout << "Masukkan nilai anda: ";
        cin >> nilai[i];}

        for (int i = 0; i <= totalinput; i++)
    {

    if(nilai[0] <= nilai[i] && nilai[1] <= nilai[i] && nilai[2] <= nilai[i]){
        cout << "Berikut merupakan nilai tertinggi " << nilai[i]<<endl;}

    if(nilai[0] >= nilai[i] && nilai[1] >= nilai[i] && nilai[2] >= nilai[i]){
        cout << "Berikut merupakan nilai terendah "<< nilai[i]<<endl;
    
    }
    }
    
 }