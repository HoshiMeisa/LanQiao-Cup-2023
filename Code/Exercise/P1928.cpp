#include <iostream>
#include <cstring>
using namespace std;


int read() {
    string password;
    cin >> password;

    int zip[10] = {0};
    for (int i = 0; i < 10; i++) {
        zip[i] = 0;
    }

    int count = 0;
    for (int i = 0; i < password.length(); i++) {
        if (password[i] == '[') {
            zip[count] = (password[i+1] - '0'); 
            count ++;
            if (password[i + 2] != '[') {
                
            }
        }
    }
}


int main () {



}