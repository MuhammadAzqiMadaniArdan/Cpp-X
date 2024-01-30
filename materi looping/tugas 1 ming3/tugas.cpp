#include <iostream>

using namespace std;
int main(){
    int total1;
    int total2;
    int hasil;
    int hs;

    cout << "masukan element 1: ";
    cin >> total1;

    cout << "masukan element 2: ";
    cin >> total2;

    int arr[total1][total2];

    for (int i = 0; i < total1; i++)
    {
        for (int x = 0; x < total2; x++)
        {
            cout << "masukan angka yang akan di tambah: " ;
            cin >> arr[i][x];
        }
        
    }

    hs = 0;

    for (int i = 0; i < total1; i++)
    {
        for (int x = 0; x < total2; x++)
        {
            hasil = hs + arr[i][x];
            hs = hasil;
        }
        
    }

    cout << "hasil nya adalah: " << hasil;
    

    
}

    

//output


