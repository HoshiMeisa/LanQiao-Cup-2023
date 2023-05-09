#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;


int main(){
    string isbn;
    cin >> isbn;

    int id = 0;

    int j = 1;
    for (int i = 0; i < isbn.length()-2; i++) {
        if (i == 1 || i == 5) {
            continue;
        }
        id += ((int)isbn[i] - 48) * j;
        j++;
    }

    int ids = id % 11;

    if (ids == (int)isbn[isbn.length()-1] - 48 || (ids == 10 && isbn[isbn.length()-1] == 'X')) {
        cout << "Right" << endl;
    } else {
        for (int i = 0; i < isbn.length()-1; i++) {
            cout << isbn[i];
        }

        if (ids == 10) {
            cout << 'X';
        } else {
            cout << ids; 
        }
        
    }


    return 0;

}
 