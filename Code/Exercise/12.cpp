#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;


int main(){
    int q;
    cin >> q;

    string str;
    cin >> str;
    
    
    while (q --) {
        int type = 0;
        cin >> type;

        if (type == 1) {
            string add;
            cin >> add;
            
            str = str + add;
            cout << str << endl;


        } else if (type == 2) {
            int a, b = 0;
            cin >> a >> b;


            str = str.substr(a, b);
            cout << str << endl;


        } else if (type == 3) {
            int a, b = 0;
            string add;
            cin >> a;
            cin >> add;

            str = str.substr(0, a) + add + str.substr(a);
            cout << str << endl;


        } else if (type == 4) {
            string tar;
            cin >> tar;

            if (str.find(tar) == string::npos) {
                cout << "-1" << endl; 
            } else {
                cout << str.find(tar) << endl;
            }

            
        }

    }


    return 0;
        
}
