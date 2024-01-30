#include <iostream>

using namespace std;
int main(){
    int totalinput;

    cout << "masukkan element" <<endl;
    cin >> totalinput;


    string nama[totalinput];
    int nis[totalinput];
    string rombel [totalinput];
    string rayon[totalinput];
    int nilai[totalinput];



    for (int i = 0; i < totalinput; i++)
    {
        
        cout << "masukkan nama anda "<<endl;
        cin >> nama[i];
        cout << "masukkan nis anda "<<endl;
        cin >> nis[i];
        cout << "masukkan rombel anda "<<endl;
        cin >> rombel[i];
        cout << "masukkan rayon anda "<<endl;
        cin >> rayon[i];
        cout << "masukkan nilai anda "<<endl;
        cin >> nilai[i];
        
    }

    for (int i = 0; i < totalinput; i++){
        cout << "nama anda adalah "<< nama[i]<<endl;
        cout << "nis anda adalah "<< nis[i]<<endl;
        cout << "rombel anda adalah "<< rombel[i]<<endl;
        cout << "rayon anda adalah "<< rayon[i]<<endl;
        cout << "nilai anda adalah "<< nilai[i]<<endl;
    }



}