#include <iostream>

using namespace std;

    int main() {
    
    string Hrf[3][4] = {
        {"| A |","| B |","| C |","| D |"},
        {"| E |","| F |","| G |","| H |"},
        {"| I |","| J |","| K |","| L |"}

    };

    for(int i=0; i<3; i++) { // looping baris
        for(int j=0; j<4; j++) { // looping kolom
            cout<<Hrf[i][j]; 
        }
        cout<<endl;
    }

    
    
}
