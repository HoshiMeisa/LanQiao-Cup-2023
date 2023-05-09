#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;


int main() {
    int n;
    string str;
    cin >> n;
    cin >> str;


    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'V' && str[i + 1] == 'K') {
            count ++;
            str[i] = str[i + 1] = 'X';
        } 
    }


    for (int i = 0; i < str.length() - 1; i++) {
        if (str[i] == str[i + 1] && str[i] != 'X') {
            count ++;
            break;
        }
    }


    cout << count << endl;
    return 0;
}