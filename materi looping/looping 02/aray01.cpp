#include <iostream>

using namespace std;
int main(){

    string siswa[5];
    int nilai [5];
    int totalinput;
    cout << "masukkan berapa banyak data";
    cin >> totalinput;

    for (int i = 0; i <= totalinput; i++)
    {
        cout << "masukkan nama anda: ";
        cin >> siswa[i];
        cout << "masukkan nilai anda";
        
        cin >> nilai[i];
    }
    
    for (int i = 0; i <= totalinput; i++)
    {
        cout << "nama anda adalah: "<< siswa[i]<<endl;
        cout << "nilai anda adalah: "<< nilai[i]<<endl;
    }

}