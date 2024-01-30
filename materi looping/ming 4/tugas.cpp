#include <iostream>
using namespace std;
int main(){
    string nama=[3];
    int nis=[3];

    cout << "masukkan nama anda "<<endl;
    cin >> nama;

    cout << "masukkan nis anda "<<endl;
    cin >> nis;

    int ;

    for(int i=0; i<4; i++) { 

        for(int j=0; j<4; j++) { 

            cout<<nama[i][j]<<endl;
            cout<<nis[i][j]<<endl;

        }
        cout<<endl;
    }
}