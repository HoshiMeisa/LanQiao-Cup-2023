#include <iostream>
#include <cmath>
using namespace std;


double calS(double x1, double y1, double x2, double y2, double x3, double y3) {
    double l1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    double l2 = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    double l3 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));

    return l1+l2+l3;
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    printf("%.2f", calS(x1, y1, x2, y2, x3, y3));

    return 0;
}