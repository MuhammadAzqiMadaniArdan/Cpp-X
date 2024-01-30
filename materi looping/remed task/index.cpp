#include <iostream>
using namespace std;
int main()
{
    
        int angka1;
        int angka2;
    char pengulang;
    do
    {

        cout << "masukkan angka pertama: ";
        cin >> angka1;

        cout << "masukkan angka kedua: ";
        cin >> angka2;

        int oprt;

        cout << "input operator untuk menghitung " << endl;
        cout << "[1 = +] " << endl;
        cout << "[2 = -] " << endl;
        cout << "[3 = *] " << endl;
        cout << "[4 = /] " << endl;
        cout << "masukkan operator yang diinginkan " << endl;
        cin >> oprt;
        cout << endl;

        int utama;

        
                if (oprt == 1)
                {

                    utama = angka1 + angka2;
                }

                else if (oprt == 2)
                {

                    utama = angka1 - angka2;
                }

                else if (oprt == 3)
                {

                    utama = angka1 * angka2;
                }
                else if (oprt == 4)
                {

                    utama = angka1 / angka2;
                }

                if (utama % 2 == 0)
                {
                    cout << utama << " adalah angka genap" << endl;
                }

                else
                {
                    cout << utama << " adalah angka ganjil" << endl;
                }
            
        cout << "apakah ingin mengulang {y/n}";
        cin >> pengulang;
    }

    while (pengulang != 'n' && pengulang == 'y' || pengulang == 'Y');
    cout << "---Program Selesai---";
}