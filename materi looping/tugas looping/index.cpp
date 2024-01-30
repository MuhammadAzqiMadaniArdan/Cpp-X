#include <iostream>

using namespace std;
int main(){

    int awal,akhir;

    cout << "Masukkan nilai awal";
    cin >> awal;
    cout << "Masukkan nilai akhir";
    cin >> akhir;


    for (awal =awal; awal>=  akhir; awal--)
    {
        cout<<awal<<endl;
    }

    for (awal = awal; awal <= akhir; awal++)
    {
         cout<<awal<<endl;
    }
    
}