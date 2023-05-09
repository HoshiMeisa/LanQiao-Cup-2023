#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>
using namespace std;


int main() {
    string word;
    string artical;

    getline(cin, word);
    getline(cin, artical);

    transform(word.begin(), word.end(), word.begin(), [](unsigned char c){ return tolower(c); });
    transform(artical.begin(), artical.end(), artical.begin(), [](unsigned char c){ return tolower(c); });

    cout << endl;
    cout << word << endl;
    cout << artical << endl;

    int pos = artical.find(word);
    int fpos = pos;

    int count = 0;
    while (pos != string::npos) {
        count ++;
        pos = artical.find(word, pos + 1);
    }

    if (fpos != string::npos) {
        cout << count << " " << fpos;
    } else {
        cout << "-1" << endl;
    }


    return 0;
}