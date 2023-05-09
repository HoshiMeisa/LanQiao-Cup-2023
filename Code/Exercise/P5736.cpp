#include <iostream>
#include <cmath>
using namespace std;


struct info
{
    string name;
    int year;
    int grade;
};



int main() {
    int n = 0;
    cin >> n;

    info person[n];

    for (int i = 0; i < n; i++) {
        cin >> person[n].name >> person[n].year >> person[n].grade >> endl;
    }
3



    return 0;
}