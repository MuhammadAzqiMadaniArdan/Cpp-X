#include <iostream>
using namespace std;
int main()
{
    int input;
    int input2;
    char pengulang;
    do
    {

        cout << "masukkan element pertama: ";
        cin >> input;

        cout << "masukkan element kedua: ";
        cin >> input2;

        int angka1[input][input2];
        int angka2[input][input2];

        cout << "---Array Pertama---" << endl;

        for (int i = 0; i < input; i++)
        {

            for (int x = 0; x < input2; x++)
            {

                cout << "masukkan angka " << endl;
                cin >> angka1[i][x];
            }
        }
        cout << "---Array Kedua---" << endl;

        for (int i = 0; i < input; i++)
        {

            for (int x = 0; x < input2; x++)
            {

                cout << "masukkan angka " << endl;
                cin >> angka2[i][x];
            }
        }

        int oprt;

        cout << "input operator untuk menghitung kedua array " << endl;
        cout << "[1 = +] " << endl;
        cout << "[2 = -] " << endl;
        cout << "[3 = *] " << endl;
        cout << "[4 = /] " << endl;
        cout << "masukkan operator yang diinginkan " << endl;
        cin >> oprt;
        cout << endl;

        int utama;

        for (int i = 0; i < input; i++)
        {

            for (int x = 0; x < input2; x++)
            {

                if (oprt == 1)
                {

                    utama = angka1[i][x] + angka2[i][x];
                }

                else if (oprt == 2)
                {

                    utama = angka1[i][x] - angka2[i][x];
                }

                else if (oprt == 3)
                {

                    utama = angka1[i][x] * angka2[i][x];
                }
                else if (oprt == 4)
                {

                    utama = angka1[i][x] / angka2[i][x];
                }

                if (utama % 2 == 0)
                {
                    cout << utama << " adalah angka genap" << endl;
                }

                else
                {
                    cout << utama << " adalah angka ganjil" << endl;
                }
            }
        }

        cout << "apakah ingin mengulang {y/n}";
        cin >> pengulang;
    }

    while (pengulang != 'n' && pengulang == 'y' || pengulang == 'Y');
    cout << "---Program Selesai---";
}

// if (i <=5){
