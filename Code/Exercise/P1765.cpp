#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string str;
    getline(cin ,str);

    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a' ||str[i] == 'd' || str[i] == 'g' || str[i] == 'j' || str[i] == 'm' || str[i] == 'p' || str[i] == 't' || str[i] == 'w') {
            count = count + 1;
        }

        if (str[i] == 'b' ||str[i] == 'e'|| str[i] == 'h' || str[i] == 'k' || str[i] == 'n' || str[i] == 'q' || str[i] == 'u' || str[i] == 'x') {
            count = count + 2;
        }

        if (str[i] == 'c' ||str[i] == 'f' || str[i] == 'i' || str[i] == 'l' || str[i] == 'o' || str[i] == 'r' || str[i] == 'v' || str[i] == 'y') {
            count = count + 3;
        }

        if (str[i] == 's' || str[i] == 'z') {
            count = count + 4;
        }

        if (str[i] == ' ') {
            count = count + 1;
        }

    }

    cout << count <<endl;
    return 0;


}