#include <iostream>
using namespace std;
int main()
{
    
    int angka ;

    cout << "masukan angka: ";
    cin >> angka;

    if(angka % 2 == 0){
        cout << angka << endl <<"ini adalah bilangan genap";
    }
    else{
        cout << angka << endl << "ini adalah bilangan ganjil";
    }


}