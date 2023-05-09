#include <bits/stdc++.h>
using namespace std;


int main() {
    int q = 0;
    cin >> q;

    string temp;
    char type;

    for (int i = 0; i < q; i++) {
        int n1, n2;
        
        cin >> temp;


        if (temp[0] >= 'a' && temp[0] <= 'z') {
            type = temp[0];
            cin >> n1 >> n2;

        } else {
            n1 = stoi(temp);
            cin >> n2;
        }


        if (type == 'a') {
            
            string answer = to_string(n1) + '+' + to_string(n2) + '=' + to_string(n1 + n2);
            cout << answer << endl << answer.length() << endl;

        } else if (type == 'b') {

            string answer = to_string(n1) + '-' + to_string(n2) + '=' + to_string(n1 - n2);
            cout << answer << endl << answer.length() << endl;

        } else if (type == 'c') {

            string answer = to_string(n1) + '*' + to_string(n2) + '=' + to_string(n1 * n2);
            cout << answer << endl << answer.length() << endl;
        } 

        }


        return 0;
    }
    

    

