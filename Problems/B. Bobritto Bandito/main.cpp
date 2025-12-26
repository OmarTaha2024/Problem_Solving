#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    double D = b*b - 4*a*c;

    if (D > 0) {
        // حاله الجذور الحقيقية المختلفة
        double root1 = (-b + sqrt(D)) / (2*a);
        double root2 = (-b - sqrt(D)) / (2*a);
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (D == 0) {
        // حاله الجذر الحقيقي المكرر
        double root = -b / (2*a);
        cout << "Root = " << root << endl;
    }
    else {
        // حاله الجذور المركبة
        double realPart = -b / (2*a);
        double imagPart = sqrt(-D) / (2*a);
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}
