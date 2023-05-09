#include <bits/stdc++.h>
using namespace std;


struct place_and_forward
{
    int place[2];
    int forward[2];
};



int main() {
    place_and_forward farmer;
    place_and_forward cow;

    int map[12][12] = {0};
    
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (i == 0 || i == 11 || j == 0 || j == 11) {
                map[i][j] = 1;
            } else {
                map[i][j] = 0;
            }
        }
    }

    string line;

    for (int i = 0; i < 10; i++) {
        getline(cin, line);

        for (int j = 0; j < 10; j++) {
            if (line[j] == '.') {
                continue;

            } else if (line[j] == '*') {
                map[i+1][j+1] = 1;

            } else if (line[j] == 'C') {
                cow.place[0] = i;
                cow.place[1] = j;

            } else if (line[j] == 'F') {
                farmer.place[0] = i;
                farmer.place[1] = j;
            }
        }
    }

/*
n: -1, 0
e: 0, 1
s: 1, 0
w: 0, -1
*/

    int xweek[4] = {-1, 0, 1, 0};
    int yweek[4] = {0, 1, 0, -1};

    cow.forward[0] = farmer.forward[0] = xweek[0];
    cow.forward[1] = farmer.forward[1] = yweek[0];

    int count = 0;

    int cturn = 0;
    int fturn = 0;

    for (int i = 0; i < 99999999; i++) {
        count ++;

        if (map[cow.place[0] + cow.forward[0]][cow.place[1] + cow.forward[1]] != 1) {
            cow.place[0] = cow.place[0] + cow.forward[0];
            cow.place[1] = cow.place[1] + cow.forward[1];
        } else {
            cturn ++;
            cturn = cturn % 4;
            cow.forward[0] = xweek[cturn];
            cow.forward[1] = yweek[cturn];
        }

        if (map[farmer.place[0] + farmer.forward[0]][farmer.place[1] + farmer.forward[1]] != 1) {
            farmer.place[0] = farmer.place[0] + farmer.forward[0];
            farmer.place[1] = farmer.place[1] + farmer.forward[1];
        } else {
            fturn ++;
            fturn = fturn % 4;
            farmer.forward[0] = xweek[cturn];
            farmer.forward[1] = yweek[cturn];
        }

        if (cow.place[0] == farmer.place[0] && cow.place[1] == farmer.place[1]) {
            cout << count << endl;
            return 0;
        }


    cout << "No";
    return 0;


    }













    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}