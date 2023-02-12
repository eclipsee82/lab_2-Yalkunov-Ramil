#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x,y;
    cout << "Lab2-4" << endl;
    cout << "Enter x: ";
    cin >> x;

    if(x<1.22){
        y = x* cos(x);
    }
    if(x>=1.22){
        y = 5 * pow(x,3) + 1.7;
    }

    cout << "y = " << y;
    return 0;
}
