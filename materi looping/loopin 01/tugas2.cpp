
#include <iostream>

using namespace std;
int main(){

    int input;

    cout << "masukkan angka";
    cin >> input;

    for( int i=1;i <= input; i++){
    //aksi
    

    if (i % 2 == 0 ){

        cout << "Ini angka ke "<<i<<" bilangan genap"<<endl;
    }

    else 
    {
    cout << "Ini angka ke "<<i<<" bilangan ganjil"<<endl;
    }
    

}
}