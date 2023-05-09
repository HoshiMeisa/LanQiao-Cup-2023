#include <bits/stdc++.h>
using namespace std;

int main() {
    string word;
    string artical;

    getline(cin, word);
    getline(cin, artical);

    transform(word.begin(), word.end(), word.begin(), [](unsigned char c) { return tolower(c); });
    transform(artical.begin(), artical.end(), artical.begin(), [](unsigned char c) { return tolower(c); });

    int pos = 0;
    int count = 0;

    int result = artical.find(word);
    int first_pos = result;
    while (result != string::npos) {
        if (artical[result - 1] == ' ' && artical[result + word.length()] == ' ') {
            count ++;
        }

        result = artical.find(word, result + 1);
    }


    if (first_pos != string::npos || count == 0) {
        cout << count << " " << first_pos << endl;

    } else {
        cout << "-1" << endl;
    }


    return 0;

}
