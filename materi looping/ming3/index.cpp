#include <iostream>

using namespace std;
int main(){
    int totalinput1;
    int totalinput2;

    cout << "masukkan total element";
    cin >> totalinput1;

    cout << "masukkan total element";
    cin >> totalinput2;


//jika data terlalu banyak bisa menggunakan array[]
// int arr[3]= {1,2,3};

//array multi dimensi
int angka[totalinput1][totalinput2] =
{
    // {1,2,3},
    // {11,22,33},
    // {111,222,333},

};

// cout << angka[2][1];

//input

 for (int i = 0; i <= totalinput1; i++)
    {
        for (int a = 0; a <= totalinput2; a++)
    {
        cout << "masukkan angka"<<endl;
        cin >> angka[i][a];
    }
    }

//output

 for (int i = 0; i <= totalinput1; i++)
    {
        for (int a = 0; a <= totalinput2; a++)
    {
        cout << angka [i][a] <<endl;
    }
    }

}