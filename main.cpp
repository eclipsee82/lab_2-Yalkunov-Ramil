#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x,y;
    cout << "Lab2-1" << endl;
    cout << "Enter x: ";
    cin >> x;

    if (x >=- 2 && x < 5)
    {
        y = 5 * pow(x, 2) + 6;
    }
    if (x >= 5)
    {
        y = pow(x, 3) + 7;
    }

    cout << "y = " << y;
    return 0;
}
