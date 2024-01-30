#include <iostream>
using namespace std;
int main()
{
    // variabel adalah wadah yang menampung suatu nilai
    //string adalah tipe data yang menampung sebuah teks dan berbagai simbol lainnya
    string  sapa;
    int umur;
    string kerja;


    //integer (int) adalah tipe daya yang menampung sebuah angka
    //fungsi cout untuk menampilkan teks
    // << disebut dengan operator left shift
    cout << "Ketikkan nama anda ";
    cin >>sapa;

    
    cout << "ketikkan umur anda ";
    cin >> umur;

    cout << "ketikkan pekerjaan anda";
    cin >> kerja;
    

    cout << "namaku " << sapa << std::endl;


    cout << "Umurku " << umur;
    cout << " Tahun" << std::endl;
    cout << "Pekerjaanku " << kerja;




     


}
